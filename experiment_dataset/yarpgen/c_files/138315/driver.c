#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1881360995;
signed char var_8 = (signed char)-112;
signed char var_9 = (signed char)87;
unsigned short var_10 = (unsigned short)62338;
int var_12 = 586477799;
int zero = 0;
short var_16 = (short)29594;
int var_17 = 1079651410;
signed char var_18 = (signed char)51;
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
