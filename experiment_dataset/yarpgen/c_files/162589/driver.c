#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23599;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-20215;
int var_6 = 88620096;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-25;
unsigned int var_11 = 2473043525U;
int var_13 = -831536794;
signed char var_15 = (signed char)-46;
signed char var_16 = (signed char)-23;
unsigned int var_17 = 927188847U;
int var_18 = -1168066832;
int zero = 0;
long long int var_19 = 6628540599788518917LL;
long long int var_20 = -9216703721475252836LL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)103;
signed char var_23 = (signed char)67;
unsigned int var_24 = 1059132213U;
long long int var_25 = 3131859378965791840LL;
_Bool arr_1 [13] [13] ;
unsigned short arr_2 [13] [13] ;
long long int arr_3 [13] ;
unsigned short arr_4 [13] [13] [13] ;
_Bool arr_6 [18] ;
short arr_7 [18] [18] ;
long long int arr_8 [18] [18] ;
unsigned short arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)6266;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -7100826750726212331LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)16704;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (short)18947;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -6390982164359781954LL : -8391774075928022557LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)5367;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
