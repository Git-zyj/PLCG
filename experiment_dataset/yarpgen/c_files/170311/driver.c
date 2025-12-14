#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 623064936U;
unsigned long long int var_1 = 17079458602722491688ULL;
int var_3 = 2075041162;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)95;
unsigned short var_9 = (unsigned short)25798;
unsigned short var_10 = (unsigned short)34592;
unsigned int var_14 = 2286751523U;
unsigned short var_16 = (unsigned short)26650;
short var_18 = (short)30657;
int zero = 0;
unsigned char var_20 = (unsigned char)231;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 4095307595U;
int var_23 = -565515100;
unsigned short var_24 = (unsigned short)5875;
int var_25 = 1053595478;
signed char var_26 = (signed char)13;
signed char var_27 = (signed char)120;
signed char var_28 = (signed char)-99;
unsigned char var_29 = (unsigned char)33;
unsigned short var_30 = (unsigned short)5527;
unsigned short var_31 = (unsigned short)14659;
unsigned long long int var_32 = 7138969623408967128ULL;
unsigned short var_33 = (unsigned short)10133;
unsigned long long int var_34 = 7650679316909364252ULL;
unsigned int var_35 = 4254550372U;
unsigned int var_36 = 1577232866U;
long long int var_37 = 248260445127536635LL;
_Bool var_38 = (_Bool)0;
short arr_0 [11] ;
unsigned int arr_2 [11] ;
unsigned char arr_4 [11] ;
unsigned short arr_6 [11] [11] ;
short arr_9 [11] [11] [11] ;
unsigned int arr_13 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_15 [11] [11] [11] [11] ;
long long int arr_20 [10] [10] ;
unsigned short arr_23 [10] ;
signed char arr_24 [10] [10] [10] ;
unsigned short arr_22 [10] ;
unsigned long long int arr_28 [10] [10] ;
_Bool arr_29 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-31653;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1118109925U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)26975;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-13324 : (short)17382;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 1101829183U : 2881134737U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3763477274U : 3278016168U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_20 [i_0] [i_1] = 7726406876667088857LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11914 : (unsigned short)57294;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-103 : (signed char)114;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = (unsigned short)64643;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? 13265970261706193037ULL : 12219857131079915128ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_29 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
