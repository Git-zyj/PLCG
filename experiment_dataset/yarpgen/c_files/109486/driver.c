#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)57065;
long long int var_7 = 5796209403599908070LL;
unsigned char var_9 = (unsigned char)252;
signed char var_11 = (signed char)66;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 2398916910311610076ULL;
unsigned short var_16 = (unsigned short)17531;
int zero = 0;
signed char var_17 = (signed char)110;
unsigned long long int var_18 = 14597748691304394605ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 14334422465070132220ULL;
unsigned char var_21 = (unsigned char)55;
short var_22 = (short)-3707;
signed char var_23 = (signed char)-107;
unsigned long long int var_24 = 11334926500401307919ULL;
_Bool var_25 = (_Bool)0;
int var_26 = 1447525546;
unsigned int var_27 = 2858377164U;
unsigned char var_28 = (unsigned char)137;
unsigned char var_29 = (unsigned char)170;
unsigned char var_30 = (unsigned char)227;
_Bool arr_0 [12] [12] ;
unsigned char arr_1 [12] [12] ;
short arr_3 [12] ;
short arr_4 [12] [12] [12] ;
unsigned short arr_5 [12] [12] [12] ;
long long int arr_9 [12] [12] [12] ;
long long int arr_11 [12] [12] [12] [12] [12] ;
short arr_16 [12] [12] [12] ;
long long int arr_19 [25] ;
_Bool arr_20 [25] ;
unsigned short arr_18 [12] ;
short arr_21 [25] [25] ;
_Bool arr_22 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)23426;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-16503;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)44000;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 7984466947778319662LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = -2630644964409500886LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)24006;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = -8641191194376974425LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30400 : (unsigned short)54729;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = (short)6793;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
