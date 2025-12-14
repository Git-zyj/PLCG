#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5747801975548860376ULL;
short var_2 = (short)5571;
long long int var_3 = -601573045765342205LL;
short var_5 = (short)10754;
unsigned long long int var_6 = 17736839971801479048ULL;
long long int var_7 = -691212903807593341LL;
unsigned long long int var_8 = 4318678640328966976ULL;
short var_9 = (short)28421;
long long int var_10 = -5175906333109036276LL;
unsigned char var_11 = (unsigned char)212;
unsigned long long int var_12 = 709099644777093215ULL;
unsigned char var_13 = (unsigned char)47;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 13296387095385545984ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)15916;
short var_18 = (short)24254;
long long int var_19 = -9046882354549105574LL;
unsigned char var_20 = (unsigned char)248;
unsigned short var_21 = (unsigned short)20293;
long long int var_22 = 1859717239457574512LL;
unsigned long long int var_23 = 15145274651680895302ULL;
long long int var_24 = 1869146864259681979LL;
int var_25 = -485775125;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 17184961317071392706ULL;
unsigned long long int var_28 = 15008202335141296803ULL;
unsigned short var_29 = (unsigned short)64222;
unsigned long long int var_30 = 15971563448355404234ULL;
unsigned long long int var_31 = 16052830038535508097ULL;
int var_32 = 1384937283;
int var_33 = 324054072;
_Bool var_34 = (_Bool)0;
signed char var_35 = (signed char)38;
long long int var_36 = -2605691550292277802LL;
short var_37 = (short)-18669;
_Bool var_38 = (_Bool)1;
unsigned short var_39 = (unsigned short)29988;
unsigned long long int arr_0 [19] ;
_Bool arr_2 [19] ;
long long int arr_5 [19] [19] ;
unsigned long long int arr_6 [19] [19] ;
_Bool arr_7 [19] [19] ;
int arr_8 [19] [19] ;
long long int arr_10 [19] [19] ;
signed char arr_11 [19] [19] ;
unsigned char arr_17 [19] ;
short arr_18 [19] [19] [19] [19] ;
int arr_31 [24] ;
unsigned char arr_35 [25] [25] ;
int arr_9 [19] [19] [19] [19] ;
unsigned int arr_15 [19] [19] [19] [19] ;
long long int arr_23 [19] [19] [19] ;
long long int arr_26 [19] ;
unsigned char arr_33 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 18307635596923914192ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = -6750847828447934965LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 15173580648892624046ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = -1034159918;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = -7556121696406409655LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (short)30685;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = -874769800;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_35 [i_0] [i_1] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -7990531 : 533095027;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 1911855645U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 2324257090471737432LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 5901465457995810361LL : 5463685567691750638LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = (unsigned char)34;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
