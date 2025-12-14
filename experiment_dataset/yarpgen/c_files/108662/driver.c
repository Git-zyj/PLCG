#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16800;
int var_2 = -1350581187;
_Bool var_6 = (_Bool)0;
signed char var_14 = (signed char)42;
int var_17 = 247046169;
int zero = 0;
int var_18 = -1458838190;
unsigned short var_19 = (unsigned short)7100;
unsigned short var_20 = (unsigned short)56896;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
