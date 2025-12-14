#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 862072376;
int var_7 = 352556906;
signed char var_11 = (signed char)48;
int zero = 0;
long long int var_12 = 3030609913991592963LL;
unsigned short var_13 = (unsigned short)20320;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
