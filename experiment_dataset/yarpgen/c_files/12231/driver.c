#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1496689386;
signed char var_2 = (signed char)-91;
unsigned short var_3 = (unsigned short)29339;
short var_7 = (short)-31114;
int zero = 0;
unsigned long long int var_11 = 14505622761156001788ULL;
signed char var_12 = (signed char)-4;
int var_13 = -317468914;
unsigned long long int var_14 = 16288710367848350493ULL;
void init() {
}

void checksum() {
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
