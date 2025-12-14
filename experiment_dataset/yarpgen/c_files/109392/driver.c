#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1504957943;
int var_6 = 1535177351;
signed char var_16 = (signed char)-64;
signed char var_17 = (signed char)-11;
int zero = 0;
unsigned int var_20 = 501329605U;
signed char var_21 = (signed char)-47;
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
