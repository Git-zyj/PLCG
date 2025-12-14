#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -749039581;
short var_3 = (short)30246;
_Bool var_6 = (_Bool)0;
unsigned int var_12 = 3624975777U;
int var_13 = 1237390956;
int zero = 0;
unsigned int var_14 = 1540397150U;
unsigned int var_15 = 3319051517U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
