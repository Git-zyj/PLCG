#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25712;
unsigned int var_6 = 935825484U;
int var_8 = 1635867400;
int zero = 0;
unsigned int var_15 = 2360591751U;
unsigned long long int var_16 = 10800389476066173332ULL;
long long int var_17 = -7331803784596251977LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
