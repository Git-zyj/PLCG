#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
unsigned int var_1 = 608378761U;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)0;
short var_10 = (short)16299;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 4424175330336113061ULL;
long long int var_16 = 4963339522815677502LL;
signed char var_17 = (signed char)-25;
unsigned long long int var_18 = 15835909889316884578ULL;
unsigned short var_19 = (unsigned short)9526;
unsigned short var_20 = (unsigned short)1202;
short var_21 = (short)28996;
int var_22 = -1114807409;
long long int var_23 = -7036904420659987985LL;
long long int var_24 = 4862671655753722709LL;
unsigned short var_25 = (unsigned short)54927;
long long int var_26 = -6791913645390355864LL;
unsigned int var_27 = 2279370766U;
signed char var_28 = (signed char)83;
unsigned long long int var_29 = 893309136843035562ULL;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 4059687722U;
unsigned short arr_0 [20] ;
_Bool arr_1 [20] ;
unsigned short arr_3 [10] ;
long long int arr_4 [10] ;
_Bool arr_8 [10] [10] ;
short arr_16 [10] [10] [10] [10] ;
unsigned short arr_19 [15] ;
unsigned short arr_21 [15] [15] ;
_Bool arr_24 [15] [15] [15] ;
unsigned long long int arr_31 [11] [11] ;
unsigned int arr_2 [20] ;
long long int arr_18 [10] ;
_Bool arr_22 [15] ;
long long int arr_32 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)17541;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)19659;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -8512619478401867537LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (short)23183;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (unsigned short)30267;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)3908;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_31 [i_0] [i_1] = 7664256927689829520ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2098282036U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 8670229087841061017LL : 931645373829439549LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_32 [i_0] = -3377379891697598681LL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
