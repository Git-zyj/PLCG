#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-9087;
unsigned int var_10 = 1753506391U;
short var_11 = (short)23971;
int zero = 0;
long long int var_16 = -1298838037647067329LL;
signed char var_17 = (signed char)-87;
long long int var_18 = 7638334404026948677LL;
unsigned char var_19 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
