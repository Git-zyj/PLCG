#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13925;
_Bool var_10 = (_Bool)1;
long long int var_12 = -3492586045544468114LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 495267630U;
unsigned short var_15 = (unsigned short)31823;
signed char var_16 = (signed char)-28;
unsigned int var_17 = 877617632U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
