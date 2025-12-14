#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9529;
unsigned long long int var_2 = 16137541519732759240ULL;
unsigned long long int var_11 = 4265829404947058314ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)20644;
unsigned long long int var_18 = 3352857633451476661ULL;
unsigned short var_19 = (unsigned short)5002;
long long int var_20 = -1027985165250742949LL;
unsigned char arr_0 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)34 : (unsigned char)101;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
