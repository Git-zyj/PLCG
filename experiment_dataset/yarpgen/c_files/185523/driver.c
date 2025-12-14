#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)142;
unsigned int var_1 = 1921884973U;
_Bool var_5 = (_Bool)1;
long long int var_7 = 8263271089580087807LL;
unsigned char var_8 = (unsigned char)42;
int zero = 0;
int var_12 = 2073410880;
long long int var_13 = 3609139867738080327LL;
signed char var_14 = (signed char)-81;
int var_15 = 1238665713;
unsigned short arr_1 [12] ;
unsigned int arr_4 [12] [12] ;
unsigned long long int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)54281;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 1682311985U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 16638134941659357488ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
