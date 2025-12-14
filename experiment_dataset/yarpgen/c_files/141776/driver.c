#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8771276993927485720LL;
unsigned char var_2 = (unsigned char)200;
unsigned int var_10 = 3177579140U;
unsigned char var_11 = (unsigned char)181;
int zero = 0;
int var_14 = 1820051928;
short var_15 = (short)-25928;
int var_16 = 740431024;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
