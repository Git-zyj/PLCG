#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -670887025691494943LL;
signed char var_2 = (signed char)101;
signed char var_6 = (signed char)-24;
signed char var_10 = (signed char)69;
unsigned char var_11 = (unsigned char)92;
int zero = 0;
int var_12 = -2003962010;
signed char var_13 = (signed char)-71;
int var_14 = -577333051;
long long int var_15 = 713356626789337709LL;
_Bool var_16 = (_Bool)0;
int arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1768933246 : -100262387;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
