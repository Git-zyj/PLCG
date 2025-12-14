#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16669;
short var_7 = (short)-32193;
short var_8 = (short)23664;
int var_9 = 107276779;
int var_10 = 1749351023;
short var_12 = (short)-1598;
short var_17 = (short)-11939;
int zero = 0;
long long int var_19 = -4538937506046625445LL;
short var_20 = (short)-31352;
short var_21 = (short)-32734;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
