#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)6;
unsigned long long int var_2 = 15192656088625019927ULL;
short var_4 = (short)-27698;
int zero = 0;
long long int var_15 = -8574933033635174745LL;
signed char var_16 = (signed char)24;
short var_17 = (short)11885;
long long int var_18 = -7162326678406328272LL;
short var_19 = (short)-30775;
unsigned long long int var_20 = 14906933842312500901ULL;
unsigned int arr_0 [10] ;
unsigned long long int arr_1 [10] [10] ;
unsigned int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2421370047U : 4036142147U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 12077924626087971428ULL : 1825685408542020552ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 934290545U : 1173142691U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
