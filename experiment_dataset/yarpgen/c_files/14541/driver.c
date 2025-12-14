#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26625;
int var_2 = -1098603226;
_Bool var_4 = (_Bool)0;
int var_8 = 1119096483;
short var_9 = (short)-25630;
unsigned int var_14 = 2064121780U;
int zero = 0;
unsigned char var_15 = (unsigned char)169;
unsigned char var_16 = (unsigned char)128;
void init() {
}

void checksum() {
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
