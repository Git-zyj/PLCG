#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-3;
unsigned int var_6 = 1401863102U;
long long int var_11 = -3386483133131995055LL;
short var_12 = (short)24653;
int zero = 0;
unsigned short var_17 = (unsigned short)49358;
unsigned int var_18 = 3729288802U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
