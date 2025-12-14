#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3106710667693831314LL;
long long int var_7 = -7871495491381664852LL;
unsigned short var_10 = (unsigned short)51410;
unsigned int var_11 = 1475195275U;
signed char var_12 = (signed char)68;
unsigned long long int var_13 = 235668882366986421ULL;
short var_16 = (short)29356;
int zero = 0;
unsigned int var_18 = 111607574U;
short var_19 = (short)-14982;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
