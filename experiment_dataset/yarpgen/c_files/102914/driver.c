#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35741;
long long int var_1 = -8166684813992433627LL;
signed char var_4 = (signed char)15;
unsigned char var_10 = (unsigned char)83;
unsigned short var_12 = (unsigned short)27859;
int zero = 0;
int var_15 = 354576555;
unsigned int var_16 = 3678703907U;
int var_17 = 832741482;
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
