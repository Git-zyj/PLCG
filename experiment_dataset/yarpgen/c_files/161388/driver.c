#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4034869399U;
short var_1 = (short)-15183;
unsigned short var_4 = (unsigned short)12433;
unsigned long long int var_5 = 18391328969480189692ULL;
unsigned short var_8 = (unsigned short)54357;
short var_9 = (short)14796;
int zero = 0;
unsigned long long int var_10 = 11442248623990095825ULL;
unsigned int var_11 = 3248594814U;
unsigned int var_12 = 2297223286U;
unsigned int var_13 = 2103248109U;
unsigned short var_14 = (unsigned short)59197;
unsigned short var_15 = (unsigned short)32186;
_Bool var_16 = (_Bool)0;
long long int var_17 = 2251572501810365218LL;
signed char var_18 = (signed char)-51;
unsigned short var_19 = (unsigned short)32446;
unsigned long long int arr_0 [25] [25] ;
unsigned long long int arr_1 [25] [25] ;
long long int arr_8 [18] ;
unsigned long long int arr_11 [14] ;
int arr_2 [25] [25] ;
_Bool arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 8180432717920072017ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 13656074083029185626ULL : 11430127305065612001ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 190525277529879472LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 8333848566402048590ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 881671762 : -294865686;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
