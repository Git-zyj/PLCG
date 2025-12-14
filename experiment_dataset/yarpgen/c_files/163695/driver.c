#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13911924971273021255ULL;
_Bool var_15 = (_Bool)0;
long long int var_17 = 2465668550264832494LL;
signed char var_18 = (signed char)28;
int zero = 0;
unsigned long long int var_20 = 1903883289780181759ULL;
unsigned short var_21 = (unsigned short)18078;
_Bool var_22 = (_Bool)0;
int var_23 = -2063934309;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
