#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8616044735705461900LL;
unsigned short var_6 = (unsigned short)48800;
unsigned int var_15 = 2181714186U;
int zero = 0;
long long int var_17 = -5546238533849881430LL;
short var_18 = (short)10896;
long long int var_19 = -1148871152860528528LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
