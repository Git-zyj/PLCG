#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12667844629448399349ULL;
unsigned char var_1 = (unsigned char)144;
unsigned int var_2 = 3503451731U;
unsigned short var_3 = (unsigned short)18078;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 12870238276588806732ULL;
unsigned short var_6 = (unsigned short)42084;
unsigned char var_7 = (unsigned char)139;
long long int var_8 = 835639945805664939LL;
unsigned short var_10 = (unsigned short)22960;
unsigned long long int var_11 = 13107949613890458847ULL;
long long int var_13 = -1006362524157264818LL;
int zero = 0;
short var_14 = (short)13035;
unsigned short var_15 = (unsigned short)53540;
_Bool var_16 = (_Bool)0;
signed char arr_0 [18] [18] ;
unsigned char arr_2 [18] ;
unsigned short arr_3 [18] [18] ;
unsigned short arr_4 [18] ;
unsigned long long int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)63431;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)49488;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 13603631403144185956ULL : 14576881192726618490ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
