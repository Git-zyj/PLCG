#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32956;
long long int var_3 = 1317546668924191817LL;
long long int var_4 = -5920696375411903293LL;
unsigned int var_11 = 4282269369U;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -269250854;
int var_14 = -1192210057;
unsigned long long int var_15 = 3043665795248420886ULL;
unsigned char var_16 = (unsigned char)20;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
