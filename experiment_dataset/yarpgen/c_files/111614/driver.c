#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_10 = 2197387990762419448LL;
unsigned short var_11 = (unsigned short)60996;
int zero = 0;
signed char var_15 = (signed char)-70;
signed char var_16 = (signed char)36;
signed char var_17 = (signed char)86;
signed char var_18 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
