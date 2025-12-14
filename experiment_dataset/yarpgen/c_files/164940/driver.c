#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -6355793035988813997LL;
unsigned long long int var_9 = 3801392223537112125ULL;
short var_11 = (short)-20709;
int zero = 0;
long long int var_12 = -1850952247471435883LL;
signed char var_13 = (signed char)-127;
signed char var_14 = (signed char)-30;
unsigned short var_15 = (unsigned short)13671;
signed char var_16 = (signed char)-75;
unsigned int var_17 = 77977239U;
signed char arr_0 [11] ;
unsigned long long int arr_1 [11] ;
unsigned long long int arr_3 [11] ;
long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 8331285247837808929ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 13649389728923102980ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -729744850041038439LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
