#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 990185231U;
signed char var_6 = (signed char)-103;
unsigned long long int var_7 = 10841213473305531171ULL;
int zero = 0;
int var_19 = -2028164954;
long long int var_20 = -3721961421593067138LL;
int var_21 = 113903447;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
