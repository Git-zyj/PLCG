#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3647843389U;
signed char var_1 = (signed char)37;
unsigned char var_3 = (unsigned char)96;
short var_4 = (short)10962;
unsigned char var_6 = (unsigned char)253;
unsigned int var_8 = 1464191964U;
short var_10 = (short)-24079;
long long int var_12 = -8620936825441007557LL;
unsigned short var_15 = (unsigned short)26706;
long long int var_17 = 949705874467095222LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 14231184868697269369ULL;
long long int var_21 = 4838659755860361401LL;
unsigned short var_22 = (unsigned short)1447;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-118;
int var_25 = -1683734856;
unsigned int var_26 = 3791071275U;
long long int arr_1 [20] ;
short arr_3 [23] ;
_Bool arr_5 [23] ;
_Bool arr_10 [16] ;
int arr_6 [23] ;
signed char arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 6906851964747515789LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)10392;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -103514394;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)-124;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
