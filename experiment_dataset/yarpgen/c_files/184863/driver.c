#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50244;
long long int var_2 = -1263397798507153558LL;
unsigned long long int var_3 = 4287624576795887786ULL;
signed char var_4 = (signed char)108;
long long int var_7 = 5546805510641591941LL;
unsigned int var_8 = 2773150537U;
int var_9 = -1647141497;
unsigned int var_10 = 2977658734U;
long long int var_11 = 7405147544817521995LL;
long long int var_12 = 1363394867680957590LL;
int zero = 0;
unsigned char var_13 = (unsigned char)170;
unsigned char var_14 = (unsigned char)3;
unsigned short var_15 = (unsigned short)8295;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)11888;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-26751;
unsigned long long int arr_0 [21] ;
unsigned int arr_1 [21] [21] ;
unsigned char arr_2 [21] [21] ;
signed char arr_3 [21] [21] ;
signed char arr_6 [18] [18] ;
long long int arr_4 [21] ;
unsigned long long int arr_7 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 14132495937261473139ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 2314374991U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 773812481098238100LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 7011409978377403314ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
