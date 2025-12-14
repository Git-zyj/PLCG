#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1299822170195865923ULL;
unsigned int var_8 = 3340714667U;
unsigned char var_9 = (unsigned char)200;
int zero = 0;
unsigned long long int var_14 = 6474042313488692316ULL;
int var_15 = 1238469086;
int var_16 = -1695731356;
short var_17 = (short)26603;
int var_18 = 2029697325;
short var_19 = (short)17476;
unsigned long long int var_20 = 5951109999816259025ULL;
short arr_1 [13] [13] ;
int arr_6 [16] ;
signed char arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)19097 : (short)-5631;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1434472883 : -1613752706;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (signed char)43;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
