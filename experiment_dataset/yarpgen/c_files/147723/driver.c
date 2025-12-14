#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)156;
short var_4 = (short)20028;
int var_7 = -1312572820;
signed char var_8 = (signed char)-9;
unsigned int var_9 = 3834877500U;
unsigned long long int var_11 = 12258310441023425062ULL;
int var_14 = 1178540726;
int zero = 0;
int var_15 = 1248641420;
short var_16 = (short)-4461;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
