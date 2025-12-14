#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15040;
_Bool var_7 = (_Bool)1;
int var_14 = 1467403481;
int var_17 = -1734309807;
signed char var_18 = (signed char)5;
int zero = 0;
long long int var_20 = -8520589678732836303LL;
unsigned short var_21 = (unsigned short)5372;
unsigned int var_22 = 423266016U;
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
