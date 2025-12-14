#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1769875217U;
unsigned char var_6 = (unsigned char)147;
long long int var_8 = 648085129580355657LL;
int zero = 0;
unsigned int var_11 = 4276155692U;
short var_12 = (short)20787;
unsigned char var_13 = (unsigned char)125;
unsigned int var_14 = 2723991437U;
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
