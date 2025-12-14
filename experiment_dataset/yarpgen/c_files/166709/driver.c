#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2635342248U;
unsigned int var_3 = 799574588U;
unsigned short var_7 = (unsigned short)27995;
unsigned int var_10 = 971134150U;
long long int var_13 = -5675832619645773042LL;
long long int var_14 = 6016322647006430605LL;
short var_15 = (short)-11075;
int zero = 0;
long long int var_18 = -5129106378055379357LL;
unsigned short var_19 = (unsigned short)48224;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
