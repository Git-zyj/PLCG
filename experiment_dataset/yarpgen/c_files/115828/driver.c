#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1579231444677050915LL;
short var_4 = (short)12340;
short var_7 = (short)-20717;
long long int var_10 = 4896421157103950686LL;
long long int var_19 = 2781092554578440081LL;
int zero = 0;
unsigned char var_20 = (unsigned char)187;
unsigned int var_21 = 1638876599U;
short var_22 = (short)-15777;
signed char var_23 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
