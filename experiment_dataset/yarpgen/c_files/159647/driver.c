#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1591260920U;
long long int var_3 = 5819476530541730806LL;
short var_4 = (short)20089;
int var_6 = -2030295508;
int zero = 0;
short var_10 = (short)-15511;
int var_11 = -312342265;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
