#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2040617845;
long long int var_1 = -6279172487867014103LL;
unsigned long long int var_4 = 9606912336326420599ULL;
signed char var_5 = (signed char)51;
unsigned long long int var_7 = 9567277979056592691ULL;
short var_9 = (short)21560;
unsigned long long int var_13 = 16658558680650725027ULL;
int zero = 0;
unsigned long long int var_14 = 14016491353126720516ULL;
_Bool var_15 = (_Bool)1;
int var_16 = 1918582210;
unsigned long long int var_17 = 2402824422597589746ULL;
unsigned long long int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 13597420368384210959ULL;
}

void checksum() {
    hash(&seed, var_14);
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
