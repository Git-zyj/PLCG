#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -50579001399751938LL;
unsigned short var_7 = (unsigned short)28895;
signed char var_14 = (signed char)-99;
int zero = 0;
unsigned short var_15 = (unsigned short)16678;
short var_16 = (short)-13961;
unsigned short var_17 = (unsigned short)9511;
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
