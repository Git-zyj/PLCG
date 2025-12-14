#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 906750633U;
int var_1 = -1828789170;
_Bool var_4 = (_Bool)0;
int var_9 = -1448968451;
int zero = 0;
short var_11 = (short)-8931;
unsigned int var_12 = 3576188261U;
int var_13 = -94699489;
short var_14 = (short)-20145;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
