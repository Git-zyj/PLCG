#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2835268450U;
int var_4 = -419718898;
signed char var_5 = (signed char)29;
unsigned int var_6 = 4215076398U;
short var_7 = (short)-15293;
unsigned char var_10 = (unsigned char)104;
int zero = 0;
int var_12 = 44024040;
int var_13 = 1715828800;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
