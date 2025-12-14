#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_6 = (short)-10645;
int zero = 0;
unsigned short var_11 = (unsigned short)27274;
long long int var_12 = -3893375272403277780LL;
unsigned char var_13 = (unsigned char)150;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3901836231U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
