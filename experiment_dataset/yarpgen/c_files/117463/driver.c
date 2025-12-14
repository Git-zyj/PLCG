#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1575640391;
unsigned short var_8 = (unsigned short)45135;
int var_11 = -2147052600;
unsigned int var_17 = 498677160U;
int var_18 = 1086029449;
int zero = 0;
int var_19 = -1136836962;
int var_20 = -1812294758;
_Bool var_21 = (_Bool)1;
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
