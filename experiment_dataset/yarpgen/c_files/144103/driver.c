#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -743079267;
unsigned int var_10 = 728693143U;
int zero = 0;
unsigned long long int var_12 = 17352498187257953681ULL;
unsigned long long int var_13 = 9317947257715724116ULL;
short var_14 = (short)-1541;
_Bool var_15 = (_Bool)0;
signed char arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)-2;
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
