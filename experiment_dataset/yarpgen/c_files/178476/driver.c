#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7593060000587082742ULL;
unsigned short var_2 = (unsigned short)49294;
int zero = 0;
unsigned int var_10 = 1837464224U;
unsigned long long int var_11 = 16440274871855156972ULL;
unsigned short var_12 = (unsigned short)22549;
unsigned int var_13 = 2139907134U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
