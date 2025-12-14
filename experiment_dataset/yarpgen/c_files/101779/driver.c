#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-72;
unsigned short var_3 = (unsigned short)11170;
long long int var_8 = -2140279745215514264LL;
long long int var_10 = 3249779810059150898LL;
int var_12 = -1040257403;
unsigned long long int var_13 = 363328672231365758ULL;
int zero = 0;
short var_14 = (short)25954;
unsigned short var_15 = (unsigned short)36004;
unsigned long long int var_16 = 14305206576126005262ULL;
int var_17 = 825695463;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
