#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = 1178463885829593789LL;
signed char var_12 = (signed char)95;
signed char var_15 = (signed char)8;
unsigned int var_18 = 1399054553U;
int zero = 0;
int var_19 = 1216414665;
int var_20 = -1653903670;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
