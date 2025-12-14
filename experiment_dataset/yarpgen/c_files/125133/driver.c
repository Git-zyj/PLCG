#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 387851172;
unsigned long long int var_3 = 9040840464249684430ULL;
unsigned int var_5 = 694227246U;
int zero = 0;
int var_15 = -1327585401;
signed char var_16 = (signed char)-38;
unsigned int var_17 = 1063623123U;
unsigned char var_18 = (unsigned char)22;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
