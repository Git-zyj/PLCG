#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16668013827481666356ULL;
int zero = 0;
short var_12 = (short)28394;
unsigned short var_13 = (unsigned short)17611;
unsigned char var_14 = (unsigned char)240;
short var_15 = (short)25023;
unsigned int var_16 = 196190236U;
unsigned long long int var_17 = 4326048229289284069ULL;
signed char var_18 = (signed char)-78;
unsigned short var_19 = (unsigned short)53089;
long long int var_20 = -9193961882504993804LL;
short var_21 = (short)416;
signed char arr_11 [19] ;
unsigned long long int arr_19 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)34 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? 392365753433890210ULL : 10818169161372860073ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
