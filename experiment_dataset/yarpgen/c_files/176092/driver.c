#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 6817063817546221456ULL;
short var_8 = (short)11757;
short var_9 = (short)19991;
signed char var_17 = (signed char)89;
unsigned int var_18 = 1648473443U;
int zero = 0;
unsigned int var_20 = 2947081727U;
short var_21 = (short)5521;
unsigned int var_22 = 3308067906U;
int var_23 = -1443003145;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
