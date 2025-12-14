#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)55469;
unsigned int var_6 = 2382333538U;
short var_7 = (short)13999;
int zero = 0;
unsigned short var_10 = (unsigned short)47730;
unsigned short var_11 = (unsigned short)13410;
int var_12 = -275389742;
short var_13 = (short)11539;
short var_14 = (short)-8945;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
