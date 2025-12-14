#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21890;
signed char var_8 = (signed char)22;
signed char var_10 = (signed char)22;
unsigned short var_12 = (unsigned short)53683;
int zero = 0;
int var_13 = -895185413;
unsigned short var_14 = (unsigned short)21125;
unsigned short var_15 = (unsigned short)7054;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
