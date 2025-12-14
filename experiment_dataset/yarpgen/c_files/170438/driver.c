#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21580;
int var_3 = 1696247295;
unsigned int var_10 = 3136462955U;
unsigned char var_11 = (unsigned char)224;
int zero = 0;
int var_15 = -1732346417;
unsigned short var_16 = (unsigned short)5674;
unsigned long long int var_17 = 5627706495275236660ULL;
void init() {
}

void checksum() {
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
