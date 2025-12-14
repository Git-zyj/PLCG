#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)82;
int var_12 = -478490859;
unsigned short var_14 = (unsigned short)45017;
int zero = 0;
int var_20 = -1180333439;
unsigned long long int var_21 = 2138410542779727206ULL;
unsigned char var_22 = (unsigned char)103;
unsigned short var_23 = (unsigned short)62310;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
