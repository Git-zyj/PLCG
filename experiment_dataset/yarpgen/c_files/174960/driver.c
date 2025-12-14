#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4174798885431812466LL;
unsigned long long int var_5 = 11007575783497584122ULL;
short var_7 = (short)5926;
int var_9 = 1148461541;
unsigned char var_10 = (unsigned char)246;
unsigned long long int var_11 = 12295474321557308502ULL;
int zero = 0;
int var_14 = 1853336542;
short var_15 = (short)-11518;
_Bool var_16 = (_Bool)1;
long long int var_17 = -1778391103088223666LL;
int var_18 = -1427483077;
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
