#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2733956619U;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)25;
short var_6 = (short)9653;
unsigned int var_10 = 1863616063U;
int zero = 0;
signed char var_13 = (signed char)-28;
unsigned short var_14 = (unsigned short)52916;
unsigned char var_15 = (unsigned char)79;
short var_16 = (short)-18401;
void init() {
}

void checksum() {
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
