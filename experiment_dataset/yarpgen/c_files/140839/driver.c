#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1570120711;
unsigned int var_4 = 2259641254U;
signed char var_9 = (signed char)17;
int var_10 = -1683157974;
int zero = 0;
signed char var_12 = (signed char)-77;
unsigned int var_13 = 130965194U;
signed char var_14 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
