#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51415;
int var_1 = 1245330929;
long long int var_2 = 1270231690381892620LL;
signed char var_3 = (signed char)77;
long long int var_4 = -8210568900898108478LL;
signed char var_5 = (signed char)-125;
long long int var_6 = 8938129479241818281LL;
signed char var_7 = (signed char)-28;
unsigned int var_8 = 176543244U;
long long int var_9 = 7051614744407963185LL;
int var_10 = -1072507460;
int zero = 0;
int var_11 = -442301239;
short var_12 = (short)4659;
unsigned int var_13 = 2154776627U;
long long int var_14 = -5170516597609928314LL;
unsigned short var_15 = (unsigned short)23344;
int var_16 = -502781600;
short var_17 = (short)28136;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)25350;
unsigned short var_20 = (unsigned short)22266;
unsigned char var_21 = (unsigned char)226;
unsigned int var_22 = 2682812151U;
unsigned short var_23 = (unsigned short)714;
unsigned char var_24 = (unsigned char)190;
long long int arr_1 [14] [14] ;
int arr_2 [14] [14] ;
long long int arr_3 [14] ;
unsigned long long int arr_4 [14] [14] ;
long long int arr_5 [14] [14] ;
long long int arr_8 [23] [23] ;
signed char arr_9 [23] [23] ;
_Bool arr_17 [23] ;
unsigned short arr_20 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 6496302126517830235LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 1507431111;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 957353685287463672LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 14201342633428007003ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 7306702491191646924LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = 682360721561807040LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)22071 : (unsigned short)55630;
}

void checksum() {
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
