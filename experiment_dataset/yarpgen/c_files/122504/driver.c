#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1693610184U;
long long int var_1 = 8813938856428871786LL;
unsigned char var_2 = (unsigned char)68;
unsigned char var_3 = (unsigned char)130;
_Bool var_4 = (_Bool)1;
int var_6 = 1593000085;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)86;
int var_9 = -543019766;
short var_10 = (short)8862;
unsigned char var_11 = (unsigned char)36;
unsigned short var_12 = (unsigned short)28213;
int zero = 0;
unsigned short var_14 = (unsigned short)43844;
unsigned char var_15 = (unsigned char)126;
signed char var_16 = (signed char)-30;
int var_17 = -344459876;
signed char var_18 = (signed char)-76;
unsigned long long int var_19 = 7146370409165448895ULL;
long long int var_20 = 6536200679710683135LL;
unsigned char var_21 = (unsigned char)122;
unsigned char var_22 = (unsigned char)249;
unsigned char var_23 = (unsigned char)215;
unsigned short var_24 = (unsigned short)27279;
unsigned int arr_0 [21] ;
signed char arr_1 [21] ;
signed char arr_2 [21] [21] ;
unsigned short arr_8 [21] ;
long long int arr_9 [21] [21] ;
int arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 67854689U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)29 : (signed char)91;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned short)29489;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 8527130425998202522LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 2140546743 : 773245692;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
