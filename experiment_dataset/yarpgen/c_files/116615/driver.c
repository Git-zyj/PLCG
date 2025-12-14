#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39299;
unsigned short var_2 = (unsigned short)36724;
unsigned short var_5 = (unsigned short)29038;
short var_6 = (short)-32103;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-44;
unsigned short var_15 = (unsigned short)31791;
short var_16 = (short)21558;
int var_17 = -1042145399;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
