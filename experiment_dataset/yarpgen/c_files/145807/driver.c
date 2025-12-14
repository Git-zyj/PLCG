#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)86;
unsigned int var_5 = 2508540933U;
long long int var_8 = 2914663675960973430LL;
int var_9 = -718875121;
unsigned int var_14 = 547224567U;
int zero = 0;
unsigned int var_15 = 1885245635U;
signed char var_16 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
