#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
long long int var_2 = -7430898749853882122LL;
int var_6 = 435440949;
int var_8 = 1761633491;
long long int var_11 = 5649589225578652759LL;
int zero = 0;
int var_14 = -541225414;
signed char var_15 = (signed char)-18;
long long int var_16 = -9166325466125525900LL;
long long int var_17 = -2187774580995619474LL;
int var_18 = 1945447621;
_Bool arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
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
