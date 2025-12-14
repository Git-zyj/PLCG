#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3328664335U;
long long int var_9 = -1737705375449960787LL;
long long int var_11 = 3755092452249574970LL;
unsigned int var_13 = 784619249U;
int var_19 = -1009196288;
int zero = 0;
unsigned int var_20 = 3486235967U;
unsigned int var_21 = 1540409559U;
long long int var_22 = 8960088387540548190LL;
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
