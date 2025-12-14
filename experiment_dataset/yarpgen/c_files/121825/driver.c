#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1559219903;
unsigned long long int var_2 = 12474149971879668200ULL;
_Bool var_7 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1173478245U;
short var_22 = (short)-10991;
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
