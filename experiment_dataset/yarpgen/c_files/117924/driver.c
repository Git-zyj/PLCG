#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2079398760U;
unsigned int var_6 = 3125459683U;
short var_9 = (short)-14428;
int var_13 = -1751096328;
unsigned short var_15 = (unsigned short)62799;
int zero = 0;
signed char var_19 = (signed char)40;
int var_20 = 1683813516;
void init() {
}

void checksum() {
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
