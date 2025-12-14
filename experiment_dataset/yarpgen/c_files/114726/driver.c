#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)236;
unsigned char var_6 = (unsigned char)71;
unsigned long long int var_10 = 13669040279101597571ULL;
int zero = 0;
int var_15 = 1636237715;
unsigned short var_16 = (unsigned short)18056;
long long int var_17 = 1886018740855963025LL;
unsigned int var_18 = 4232920009U;
long long int var_19 = 7999406299312109973LL;
unsigned long long int var_20 = 7689100045988128508ULL;
unsigned int arr_0 [21] ;
long long int arr_1 [21] ;
unsigned long long int arr_5 [21] ;
long long int arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1297137264U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 4771159539262888042LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 4726657045563523885ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -4305574847732881436LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
