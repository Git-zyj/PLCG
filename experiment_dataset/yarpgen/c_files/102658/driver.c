#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15131;
_Bool var_2 = (_Bool)1;
short var_4 = (short)7121;
unsigned int var_9 = 1444947252U;
int zero = 0;
unsigned int var_13 = 859663881U;
short var_14 = (short)-24287;
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
