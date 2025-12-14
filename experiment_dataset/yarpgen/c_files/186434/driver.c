#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6917142603292738559LL;
int zero = 0;
unsigned int var_12 = 2841176359U;
short var_13 = (short)10164;
signed char var_14 = (signed char)-54;
long long int var_15 = 8565768241286597837LL;
unsigned short var_16 = (unsigned short)7981;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
