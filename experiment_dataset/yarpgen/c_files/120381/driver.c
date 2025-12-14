#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 442015430;
unsigned short var_6 = (unsigned short)659;
unsigned int var_8 = 2384456895U;
short var_9 = (short)-26506;
int zero = 0;
unsigned short var_20 = (unsigned short)2521;
short var_21 = (short)-19143;
void init() {
}

void checksum() {
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
