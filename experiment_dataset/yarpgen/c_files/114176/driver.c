#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1938261984;
unsigned short var_3 = (unsigned short)29430;
int var_4 = -215873584;
unsigned int var_5 = 370415810U;
signed char var_8 = (signed char)-47;
int var_13 = -665427434;
int zero = 0;
short var_15 = (short)-31696;
signed char var_16 = (signed char)71;
void init() {
}

void checksum() {
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
