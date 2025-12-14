#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)159;
unsigned short var_5 = (unsigned short)41461;
unsigned char var_14 = (unsigned char)136;
int zero = 0;
unsigned int var_15 = 1958923043U;
unsigned short var_16 = (unsigned short)45027;
unsigned long long int var_17 = 13698424470357984053ULL;
signed char var_18 = (signed char)-78;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 4381373033195107652ULL;
unsigned int var_21 = 4175905185U;
signed char var_22 = (signed char)-16;
unsigned long long int var_23 = 11724772929054674292ULL;
unsigned long long int var_24 = 8601601333535650958ULL;
unsigned char var_25 = (unsigned char)141;
unsigned short var_26 = (unsigned short)44416;
unsigned int var_27 = 4060335211U;
signed char var_28 = (signed char)-62;
unsigned long long int var_29 = 9815819564678959253ULL;
signed char var_30 = (signed char)-18;
short var_31 = (short)26243;
int var_32 = -1003383429;
short var_33 = (short)-5611;
_Bool var_34 = (_Bool)1;
unsigned char var_35 = (unsigned char)246;
unsigned long long int var_36 = 627138763474382804ULL;
unsigned long long int var_37 = 403330132154157932ULL;
unsigned short arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)40696;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
