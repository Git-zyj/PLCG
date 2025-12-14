#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)39468;
unsigned int var_6 = 3000998056U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_15 = 17682469598389896150ULL;
int zero = 0;
unsigned int var_20 = 4194137389U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1800225634U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
