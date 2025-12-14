#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)155;
int var_6 = 907913102;
unsigned int var_7 = 700288277U;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_13 = -653735564367603371LL;
unsigned long long int var_14 = 12985313396139790178ULL;
long long int var_15 = 7880455958967919758LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
