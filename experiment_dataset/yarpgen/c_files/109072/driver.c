#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)8388;
short var_9 = (short)-15837;
unsigned short var_13 = (unsigned short)13518;
int var_14 = -788872499;
unsigned int var_17 = 1632365869U;
signed char var_19 = (signed char)61;
int zero = 0;
unsigned short var_20 = (unsigned short)43090;
unsigned long long int var_21 = 2062888408130321601ULL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
