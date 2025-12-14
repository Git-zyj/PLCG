#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7958153283448346671ULL;
unsigned char var_15 = (unsigned char)98;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_20 = (short)-14865;
unsigned int var_21 = 924921709U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
