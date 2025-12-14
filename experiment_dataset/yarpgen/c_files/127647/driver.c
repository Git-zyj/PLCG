#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 456227424U;
int var_5 = -1187772950;
long long int var_6 = 7840612280670527640LL;
long long int var_8 = -8730444386298985662LL;
int zero = 0;
long long int var_11 = -1022789937846817816LL;
short var_12 = (short)-13955;
unsigned char var_13 = (unsigned char)67;
unsigned char var_14 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
