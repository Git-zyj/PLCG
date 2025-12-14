#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5965;
signed char var_5 = (signed char)-67;
short var_11 = (short)-9626;
unsigned int var_14 = 3362211784U;
int zero = 0;
signed char var_15 = (signed char)-13;
unsigned int var_16 = 975375379U;
long long int var_17 = -1660061483665915616LL;
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
