#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9173427089272115911ULL;
long long int var_5 = -4076601290436491458LL;
int var_9 = -519015943;
int zero = 0;
unsigned short var_15 = (unsigned short)21116;
unsigned long long int var_16 = 17534692027015328609ULL;
long long int var_17 = -7294390628921486372LL;
long long int arr_0 [11] ;
signed char arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1561590812261813786LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
