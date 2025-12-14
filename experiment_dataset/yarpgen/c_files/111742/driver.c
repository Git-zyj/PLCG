#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1948157804620960419LL;
unsigned char var_1 = (unsigned char)160;
unsigned long long int var_2 = 9088188674531785536ULL;
long long int var_3 = 8765111873150708427LL;
int var_4 = -1609494305;
unsigned short var_5 = (unsigned short)49051;
short var_6 = (short)-14414;
unsigned long long int var_7 = 2518544423486704792ULL;
unsigned long long int var_8 = 9425211707504847918ULL;
int var_9 = 534560304;
unsigned char var_10 = (unsigned char)6;
short var_11 = (short)-14518;
unsigned long long int var_12 = 810449755121067627ULL;
unsigned short var_13 = (unsigned short)8704;
short var_14 = (short)-22746;
long long int var_15 = -5343913907927131075LL;
unsigned int var_16 = 728768402U;
int zero = 0;
long long int var_17 = -3555750970891085787LL;
int var_18 = 60270388;
short var_19 = (short)-29382;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 13669605277271747132ULL;
unsigned long long int var_22 = 15995170112624110304ULL;
int var_23 = 182085940;
unsigned char var_24 = (unsigned char)101;
_Bool var_25 = (_Bool)1;
short var_26 = (short)-23879;
unsigned int var_27 = 752320510U;
short var_28 = (short)25139;
unsigned short var_29 = (unsigned short)28900;
unsigned char var_30 = (unsigned char)219;
_Bool var_31 = (_Bool)0;
unsigned long long int var_32 = 11658963730015934247ULL;
_Bool var_33 = (_Bool)0;
unsigned char var_34 = (unsigned char)48;
signed char arr_5 [13] ;
unsigned long long int arr_6 [13] [13] ;
unsigned char arr_14 [13] [13] ;
unsigned int arr_15 [13] ;
_Bool arr_16 [13] [13] ;
long long int arr_23 [16] [16] ;
unsigned char arr_24 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 13709994923816875556ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 1979511880U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_23 [i_0] [i_1] = -1078566993066903862LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned char)17;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
