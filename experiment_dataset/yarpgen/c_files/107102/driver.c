#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3587053713U;
unsigned long long int var_4 = 13762615556619890500ULL;
unsigned short var_7 = (unsigned short)56566;
unsigned int var_10 = 1399474486U;
int zero = 0;
unsigned long long int var_18 = 10139913160133926350ULL;
signed char var_19 = (signed char)34;
unsigned char var_20 = (unsigned char)107;
unsigned int var_21 = 3655104474U;
unsigned short var_22 = (unsigned short)27414;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
unsigned int arr_0 [18] ;
unsigned long long int arr_1 [18] [18] ;
signed char arr_2 [18] [18] ;
short arr_4 [24] [24] ;
_Bool arr_6 [24] [24] ;
int arr_7 [24] ;
unsigned int arr_8 [12] ;
unsigned char arr_11 [12] ;
unsigned char arr_3 [18] [18] ;
unsigned char arr_16 [12] [12] ;
long long int arr_20 [12] ;
unsigned short arr_21 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 856966689U : 100283720U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 1878061599325913273ULL : 11473705208793085704ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-27739;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -142125756;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 903552211U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)122 : (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = -6929468358294898186LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (unsigned short)60721;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
