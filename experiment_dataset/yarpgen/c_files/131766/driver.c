#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11077090230807524179ULL;
signed char var_1 = (signed char)22;
unsigned long long int var_5 = 11290679157036829529ULL;
unsigned long long int var_8 = 18100792574875541377ULL;
long long int var_10 = -8215315678345366730LL;
short var_13 = (short)-5586;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 8813615403397689504LL;
short var_16 = (short)12369;
int var_17 = -1295915634;
unsigned long long int var_18 = 18318666578722895816ULL;
int arr_2 [21] ;
long long int arr_3 [21] ;
unsigned short arr_5 [21] ;
long long int arr_4 [21] [21] ;
unsigned int arr_14 [21] [21] ;
unsigned long long int arr_15 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1789966846;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -647611324152103067LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)62650 : (unsigned short)41754;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -1529088734101086519LL : 4403131365937017257LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 736596620U : 3303280521U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 5441152535768912532ULL : 12569471396853509463ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
