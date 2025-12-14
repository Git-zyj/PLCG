#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)15701;
signed char var_5 = (signed char)-17;
unsigned char var_6 = (unsigned char)149;
unsigned int var_12 = 1573438800U;
int zero = 0;
unsigned short var_13 = (unsigned short)22679;
int var_14 = 1464313731;
void init() {
}

void checksum() {
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
