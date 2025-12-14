#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -2605127122004571573LL;
signed char var_7 = (signed char)18;
long long int var_8 = -1506005435512480837LL;
int var_9 = 1026296120;
int zero = 0;
short var_14 = (short)18787;
signed char var_15 = (signed char)2;
unsigned long long int var_16 = 16628211788953625818ULL;
signed char arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)62;
}

void checksum() {
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
