#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 563724915U;
unsigned char var_2 = (unsigned char)121;
int var_3 = 1885386047;
short var_4 = (short)4702;
signed char var_7 = (signed char)109;
short var_10 = (short)-15757;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 945916186386351374ULL;
unsigned int var_14 = 1296227337U;
unsigned long long int var_15 = 16837704640176337618ULL;
unsigned short var_16 = (unsigned short)45767;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)53374;
int var_19 = -1099250538;
unsigned int var_20 = 497217640U;
unsigned char var_21 = (unsigned char)224;
short var_22 = (short)17892;
long long int var_23 = 5424642551009908634LL;
unsigned int var_24 = 1386694893U;
unsigned short var_25 = (unsigned short)54541;
unsigned int arr_0 [23] ;
unsigned int arr_2 [23] [23] ;
unsigned int arr_3 [23] [23] ;
long long int arr_5 [23] [23] [23] [23] ;
_Bool arr_6 [23] [23] [23] [23] ;
unsigned short arr_8 [23] [23] [23] ;
unsigned short arr_10 [23] ;
_Bool arr_12 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3498279658U : 4206672148U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 639970715U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 2055605134U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 5679061209049063898LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)21690;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned short)35351;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)1;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
