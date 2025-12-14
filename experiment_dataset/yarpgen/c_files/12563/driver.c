#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11588;
signed char var_5 = (signed char)52;
unsigned long long int var_10 = 18073440710033931178ULL;
unsigned short var_11 = (unsigned short)54338;
int zero = 0;
short var_15 = (short)13843;
unsigned int var_16 = 1846212174U;
signed char var_17 = (signed char)-125;
void init() {
}

void checksum() {
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
