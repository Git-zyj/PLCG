#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2840692475015316788ULL;
unsigned short var_2 = (unsigned short)286;
unsigned int var_3 = 1176471421U;
unsigned int var_4 = 1209986554U;
unsigned short var_5 = (unsigned short)414;
unsigned int var_7 = 2483416737U;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)16287;
unsigned long long int var_10 = 17103887588655343687ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)43;
unsigned long long int var_13 = 11713417585405813059ULL;
unsigned long long int var_14 = 4838144806358203126ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)5623;
short var_19 = (short)-17505;
unsigned long long int var_20 = 18080494040742031425ULL;
unsigned short var_21 = (unsigned short)64006;
unsigned long long int var_22 = 10434080940289439577ULL;
unsigned long long int var_23 = 12965727239705200623ULL;
unsigned long long int var_24 = 17991572625225110124ULL;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)-84;
unsigned int var_27 = 3597856636U;
signed char arr_0 [12] ;
short arr_1 [12] ;
long long int arr_2 [17] ;
_Bool arr_3 [17] ;
short arr_5 [17] [17] ;
unsigned int arr_6 [17] [17] ;
_Bool arr_9 [17] [17] ;
int arr_10 [17] [17] ;
signed char arr_11 [17] ;
unsigned short arr_13 [17] [17] [17] [17] ;
_Bool arr_14 [17] [17] ;
unsigned int arr_15 [17] [17] [17] [17] ;
short arr_16 [17] ;
unsigned int arr_17 [17] [17] [17] ;
_Bool arr_24 [17] ;
_Bool arr_4 [17] ;
long long int arr_8 [17] [17] ;
unsigned char arr_18 [17] [17] [17] [17] [17] ;
unsigned long long int arr_26 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)9626;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -650502257624188711LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-4101;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 1384256391U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 703950613;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)2900;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 1895892638U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (short)31419;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 344039675U : 2610563189U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_24 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = 662662361281147103LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)64 : (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_26 [i_0] [i_1] = 10248562372597372777ULL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
