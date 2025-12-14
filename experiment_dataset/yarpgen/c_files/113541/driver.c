#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1008608911U;
int var_2 = -807786200;
unsigned int var_5 = 2304798005U;
_Bool var_12 = (_Bool)0;
int var_14 = 925402940;
unsigned int var_15 = 4179018365U;
int zero = 0;
unsigned char var_20 = (unsigned char)110;
long long int var_21 = -5494601819438456717LL;
int var_22 = 2055233564;
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
