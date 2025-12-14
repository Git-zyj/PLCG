#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41631;
unsigned short var_1 = (unsigned short)11926;
unsigned char var_2 = (unsigned char)110;
unsigned short var_3 = (unsigned short)47709;
long long int var_4 = 7412186186781958222LL;
signed char var_5 = (signed char)-95;
unsigned char var_6 = (unsigned char)250;
unsigned char var_7 = (unsigned char)141;
long long int var_8 = -8579530942466243597LL;
signed char var_9 = (signed char)84;
unsigned char var_10 = (unsigned char)171;
int var_11 = 1512854392;
int zero = 0;
signed char var_12 = (signed char)16;
unsigned int var_13 = 3317254144U;
unsigned char var_14 = (unsigned char)146;
unsigned int var_15 = 315006360U;
long long int var_16 = 4417464151337956593LL;
unsigned short var_17 = (unsigned short)50862;
unsigned char arr_14 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)88;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
