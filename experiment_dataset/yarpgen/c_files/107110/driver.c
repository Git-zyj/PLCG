#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25623;
short var_3 = (short)-15579;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 1008209664U;
unsigned int var_14 = 4198565736U;
void init() {
}

void checksum() {
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
