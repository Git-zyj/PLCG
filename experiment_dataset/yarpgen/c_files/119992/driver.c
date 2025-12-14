#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1752761780;
signed char var_6 = (signed char)72;
unsigned long long int var_8 = 15158181751381586616ULL;
unsigned long long int var_13 = 674193352784731628ULL;
short var_15 = (short)22271;
unsigned char var_16 = (unsigned char)102;
int zero = 0;
short var_18 = (short)32313;
unsigned char var_19 = (unsigned char)87;
int var_20 = -1677862094;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
