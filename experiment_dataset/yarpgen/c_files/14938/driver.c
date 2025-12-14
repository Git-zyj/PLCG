#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2019680702U;
unsigned int var_2 = 1864432680U;
unsigned int var_3 = 217871902U;
unsigned int var_6 = 1531034739U;
unsigned int var_9 = 1145603510U;
unsigned int var_10 = 2886982100U;
unsigned int var_12 = 1980377072U;
unsigned int var_15 = 1961039891U;
unsigned int var_17 = 1293685388U;
int zero = 0;
unsigned int var_18 = 1304053984U;
unsigned int var_19 = 2011612532U;
unsigned int var_20 = 2048293519U;
unsigned int var_21 = 4195813546U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
