#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -1854662225;
unsigned int var_5 = 3782509651U;
unsigned int var_6 = 3234376930U;
unsigned int var_7 = 3652418615U;
int zero = 0;
short var_14 = (short)27433;
unsigned int var_15 = 3720459336U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
