#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1105331629;
unsigned int var_6 = 752876570U;
unsigned int var_7 = 1875731142U;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1341254369U;
int zero = 0;
unsigned int var_14 = 3397222728U;
unsigned short var_15 = (unsigned short)52511;
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
