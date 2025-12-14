#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3154956560U;
unsigned short var_9 = (unsigned short)8043;
int var_10 = 1817461806;
int zero = 0;
long long int var_16 = -3506105327185154795LL;
long long int var_17 = -8017020182043234519LL;
unsigned int var_18 = 1726981262U;
unsigned char var_19 = (unsigned char)61;
long long int var_20 = 8591169526593406138LL;
int var_21 = 1387143604;
long long int arr_2 [14] ;
unsigned int arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -7892384139087391683LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 2193319916U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
