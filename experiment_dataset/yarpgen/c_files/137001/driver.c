#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8111863447810990167LL;
unsigned long long int var_8 = 17312068204867851411ULL;
int var_12 = -413482316;
int zero = 0;
long long int var_20 = -6265746217349481606LL;
long long int var_21 = -2898619839501177025LL;
unsigned long long int var_22 = 18125304011952355322ULL;
unsigned int var_23 = 3577891388U;
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
