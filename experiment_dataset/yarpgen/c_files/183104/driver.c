#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27681;
short var_4 = (short)32126;
signed char var_10 = (signed char)1;
signed char var_15 = (signed char)114;
int zero = 0;
unsigned char var_16 = (unsigned char)15;
long long int var_17 = 2669028937967714549LL;
unsigned long long int var_18 = 10478674951327722865ULL;
void init() {
}

void checksum() {
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
