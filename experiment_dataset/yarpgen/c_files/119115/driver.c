#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)175;
_Bool var_3 = (_Bool)1;
short var_4 = (short)16260;
unsigned char var_5 = (unsigned char)19;
unsigned int var_7 = 614715932U;
short var_8 = (short)-21609;
signed char var_10 = (signed char)-25;
unsigned char var_11 = (unsigned char)48;
unsigned char var_12 = (unsigned char)237;
unsigned short var_13 = (unsigned short)31662;
signed char var_14 = (signed char)117;
short var_15 = (short)-11841;
int zero = 0;
unsigned long long int var_16 = 7870785288997506570ULL;
unsigned int var_17 = 1628204731U;
short var_18 = (short)23946;
unsigned int var_19 = 1496343933U;
long long int var_20 = 7691496792982092717LL;
long long int var_21 = 8912294225831192428LL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-1407;
unsigned long long int var_24 = 3077646374517065055ULL;
short var_25 = (short)21462;
unsigned int var_26 = 2243516242U;
_Bool var_27 = (_Bool)1;
unsigned long long int var_28 = 4469634791552025019ULL;
unsigned char var_29 = (unsigned char)190;
unsigned int var_30 = 4224802824U;
signed char var_31 = (signed char)-105;
unsigned char var_32 = (unsigned char)101;
int arr_0 [11] ;
long long int arr_1 [11] ;
_Bool arr_2 [11] ;
long long int arr_8 [11] [11] [11] ;
_Bool arr_14 [11] [11] [11] [11] [11] ;
unsigned long long int arr_18 [11] [11] [11] ;
unsigned char arr_21 [11] [11] [11] [11] [11] ;
long long int arr_22 [11] [11] [11] ;
_Bool arr_3 [11] ;
short arr_25 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1450900919;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 5379842814689965785LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 7032766722399545317LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 4345518596155698283ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = -3754012367524998393LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_25 [i_0] [i_1] = (short)29808;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
