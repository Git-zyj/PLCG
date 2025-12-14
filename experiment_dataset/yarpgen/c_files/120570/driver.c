#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1071048191;
_Bool var_2 = (_Bool)1;
signed char var_12 = (signed char)4;
unsigned short var_13 = (unsigned short)42090;
unsigned short var_16 = (unsigned short)20776;
int zero = 0;
unsigned int var_17 = 2928071004U;
int var_18 = 1216754971;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
