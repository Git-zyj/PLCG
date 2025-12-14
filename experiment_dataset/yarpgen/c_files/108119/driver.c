#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4337;
unsigned char var_7 = (unsigned char)44;
unsigned long long int var_8 = 16612822655448267941ULL;
int zero = 0;
signed char var_13 = (signed char)32;
int var_14 = -1513402175;
signed char var_15 = (signed char)10;
void init() {
}

void checksum() {
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
