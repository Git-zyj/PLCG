#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4914012460319703676LL;
unsigned short var_10 = (unsigned short)34276;
signed char var_12 = (signed char)-101;
unsigned int var_13 = 2145171456U;
int zero = 0;
short var_14 = (short)10147;
unsigned long long int var_15 = 16789420374392039405ULL;
short var_16 = (short)-7290;
unsigned char var_17 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
