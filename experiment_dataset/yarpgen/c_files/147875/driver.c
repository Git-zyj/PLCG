#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1692427568029870478ULL;
short var_6 = (short)29572;
int var_10 = 1357937047;
int var_12 = -1388204029;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = -1371919124;
int var_15 = -674090741;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-3417;
unsigned char var_18 = (unsigned char)204;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
