#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36947;
signed char var_1 = (signed char)54;
long long int var_2 = -1239502016335184858LL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 533366017769783916LL;
unsigned short var_6 = (unsigned short)60943;
short var_7 = (short)25659;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3317359176U;
short var_10 = (short)20358;
unsigned long long int var_11 = 12543362189643689360ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 12304826181648101661ULL;
long long int var_14 = -4675960086679025735LL;
int zero = 0;
long long int var_15 = 6332817610166349032LL;
short var_16 = (short)-64;
long long int var_17 = 6773272759980334413LL;
signed char var_18 = (signed char)54;
unsigned char var_19 = (unsigned char)57;
short var_20 = (short)13165;
unsigned long long int var_21 = 2006856369813063436ULL;
long long int var_22 = 7433568616354387940LL;
short var_23 = (short)30325;
unsigned char var_24 = (unsigned char)187;
unsigned short var_25 = (unsigned short)56628;
unsigned short arr_12 [21] [21] [21] [21] ;
long long int arr_13 [21] [21] ;
unsigned char arr_21 [22] ;
unsigned char arr_22 [22] ;
unsigned char arr_25 [18] ;
signed char arr_28 [24] [24] ;
long long int arr_29 [24] ;
unsigned long long int arr_33 [22] [22] ;
unsigned long long int arr_34 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned short)63651;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = -1559996078684543902LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_28 [i_0] [i_1] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = -5175627697665601243LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_33 [i_0] [i_1] = 7251309338538322307ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_34 [i_0] [i_1] = 7495314921629922540ULL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
