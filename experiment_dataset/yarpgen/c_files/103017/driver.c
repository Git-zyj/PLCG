#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_13 = (short)10493;
unsigned short var_16 = (unsigned short)34465;
int zero = 0;
int var_18 = -1202469869;
unsigned int var_19 = 1766941817U;
unsigned char var_20 = (unsigned char)226;
long long int var_21 = 7164133233803651378LL;
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
