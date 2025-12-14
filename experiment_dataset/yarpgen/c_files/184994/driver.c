#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)235;
signed char var_8 = (signed char)-83;
_Bool var_9 = (_Bool)0;
long long int var_12 = 1018402798567263026LL;
int zero = 0;
long long int var_15 = -994369387940307325LL;
unsigned short var_16 = (unsigned short)3503;
unsigned int var_17 = 3382094690U;
unsigned char var_18 = (unsigned char)237;
unsigned char var_19 = (unsigned char)251;
unsigned long long int arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 8456993683353921961ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
