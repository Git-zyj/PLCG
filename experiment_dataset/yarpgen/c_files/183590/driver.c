#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3055372490161595317ULL;
unsigned char var_2 = (unsigned char)22;
int var_4 = 1129452302;
unsigned long long int var_5 = 8684030004129263042ULL;
unsigned long long int var_6 = 15020160917083468661ULL;
int var_8 = 883741486;
short var_10 = (short)-3461;
long long int var_14 = -587765282902853753LL;
int zero = 0;
unsigned char var_15 = (unsigned char)5;
long long int var_16 = -3629312258464954336LL;
unsigned int var_17 = 4227163806U;
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
