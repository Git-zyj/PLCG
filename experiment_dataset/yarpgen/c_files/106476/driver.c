#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1825273887;
unsigned int var_10 = 3726606839U;
unsigned char var_17 = (unsigned char)135;
int zero = 0;
int var_20 = -1745258874;
unsigned long long int var_21 = 8713847742890075025ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
