#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9833414706865091485ULL;
unsigned long long int var_2 = 13751074060790916574ULL;
unsigned int var_4 = 2416562045U;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)122;
_Bool var_9 = (_Bool)0;
short var_11 = (short)16885;
int zero = 0;
long long int var_12 = -4672028940476938828LL;
unsigned char var_13 = (unsigned char)120;
unsigned short var_14 = (unsigned short)3747;
unsigned short var_15 = (unsigned short)55423;
unsigned char var_16 = (unsigned char)50;
unsigned short var_17 = (unsigned short)48192;
long long int var_18 = 5429700257928867980LL;
unsigned short var_19 = (unsigned short)35513;
unsigned int var_20 = 1432516464U;
unsigned short arr_0 [24] ;
_Bool arr_1 [24] ;
_Bool arr_2 [24] ;
unsigned long long int arr_3 [24] [24] ;
int arr_5 [25] [25] ;
_Bool arr_6 [25] ;
short arr_4 [24] [24] ;
signed char arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)28698;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 1155941396450183569ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = -2050077119;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-7609 : (short)26271;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (signed char)-19;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
