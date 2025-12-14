#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12951;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)49883;
int var_7 = 395399454;
long long int var_9 = 4008684915023307594LL;
unsigned char var_11 = (unsigned char)33;
int zero = 0;
unsigned short var_12 = (unsigned short)53543;
long long int var_13 = -5018787029435205191LL;
long long int var_14 = -3378663578997741410LL;
unsigned short var_15 = (unsigned short)51937;
unsigned long long int var_16 = 1147894755647277465ULL;
short var_17 = (short)19773;
unsigned int var_18 = 1776418077U;
unsigned int var_19 = 1276974297U;
signed char arr_1 [15] ;
unsigned long long int arr_8 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 2550425878370110629ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
