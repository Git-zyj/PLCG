#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)50;
int var_5 = 1326134094;
signed char var_6 = (signed char)16;
int var_7 = -1825442385;
short var_9 = (short)480;
short var_12 = (short)23978;
int var_14 = -143387316;
int zero = 0;
unsigned char var_15 = (unsigned char)159;
signed char var_16 = (signed char)-26;
_Bool var_17 = (_Bool)1;
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
