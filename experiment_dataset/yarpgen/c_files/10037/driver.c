#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26093;
unsigned int var_4 = 3203393048U;
long long int var_9 = -8038016856151864419LL;
unsigned char var_11 = (unsigned char)227;
short var_12 = (short)-8828;
short var_14 = (short)-11199;
unsigned int var_15 = 321677670U;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)199;
void init() {
}

void checksum() {
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
