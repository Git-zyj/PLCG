#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 2030072476;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)46;
int var_12 = 1158323243;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 1893770805U;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)47;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
