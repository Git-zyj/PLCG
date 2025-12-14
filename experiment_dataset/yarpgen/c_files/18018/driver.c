#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-22145;
unsigned int var_6 = 2269227877U;
unsigned short var_10 = (unsigned short)26903;
int zero = 0;
unsigned char var_15 = (unsigned char)225;
unsigned int var_16 = 4277914043U;
unsigned long long int var_17 = 8400466424947930135ULL;
long long int var_18 = 929288168605287871LL;
_Bool arr_0 [13] ;
unsigned long long int arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 7894038898089805388ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
