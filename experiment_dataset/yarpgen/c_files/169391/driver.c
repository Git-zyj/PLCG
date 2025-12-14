#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22206;
unsigned char var_1 = (unsigned char)129;
unsigned short var_2 = (unsigned short)36886;
int var_3 = 1240222739;
unsigned short var_4 = (unsigned short)7668;
signed char var_6 = (signed char)-51;
long long int var_7 = -6783014982003249855LL;
unsigned char var_9 = (unsigned char)157;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)60774;
unsigned short var_12 = (unsigned short)13245;
int var_14 = -687579193;
long long int var_15 = 3067702808501537973LL;
int var_16 = -1872555918;
int var_17 = 1586502948;
unsigned short var_18 = (unsigned short)25163;
int zero = 0;
int var_19 = -294596979;
int var_20 = 1733496268;
unsigned short var_21 = (unsigned short)4205;
unsigned short var_22 = (unsigned short)29873;
short var_23 = (short)2687;
int var_24 = -759472010;
int var_25 = 1897845086;
unsigned short var_26 = (unsigned short)46691;
int var_27 = -1007114900;
unsigned short var_28 = (unsigned short)43991;
unsigned short var_29 = (unsigned short)24416;
_Bool var_30 = (_Bool)0;
long long int arr_0 [13] ;
int arr_1 [13] ;
short arr_2 [13] ;
unsigned short arr_4 [13] ;
int arr_5 [13] [13] ;
short arr_11 [15] ;
_Bool arr_6 [13] [13] ;
unsigned char arr_10 [11] ;
int arr_18 [15] [15] ;
signed char arr_26 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 3732875002983275708LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1093532198;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)29781;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)55800;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 1983155353;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)-4681 : (short)8646;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? -1298213739 : -1802636251;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-18 : (signed char)39;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
