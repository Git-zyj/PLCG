#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1756927469;
int var_1 = -117239852;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)42561;
unsigned int var_8 = 747551287U;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)184;
_Bool var_11 = (_Bool)1;
int var_12 = 1253649044;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
