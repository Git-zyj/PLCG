#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1266;
long long int var_4 = 7527279434377953055LL;
unsigned long long int var_5 = 8407414224974163847ULL;
long long int var_8 = -7935556886767427742LL;
signed char var_15 = (signed char)-79;
unsigned long long int var_16 = 5719028073560306991ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)0;
unsigned short var_21 = (unsigned short)55871;
signed char var_22 = (signed char)-84;
unsigned long long int var_23 = 11411742182899255062ULL;
unsigned int arr_7 [14] ;
unsigned long long int arr_8 [14] ;
unsigned int arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 157429340U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 12872856455333983744ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 3800524481U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
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
