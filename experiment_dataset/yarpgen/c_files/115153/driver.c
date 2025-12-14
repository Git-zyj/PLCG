#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3711684305U;
unsigned long long int var_4 = 3190461705251668142ULL;
unsigned long long int var_7 = 11123557250539140068ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_15 = (short)-15064;
unsigned short var_16 = (unsigned short)61158;
int var_17 = -1708608381;
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
