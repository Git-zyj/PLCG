#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -270694824;
short var_3 = (short)27530;
short var_5 = (short)23692;
short var_7 = (short)-10267;
signed char var_9 = (signed char)-90;
int var_11 = -1030924482;
int zero = 0;
short var_12 = (short)-4625;
short var_13 = (short)533;
unsigned int var_14 = 1734105929U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
