#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 13016420339787668992ULL;
unsigned char var_7 = (unsigned char)106;
unsigned char var_8 = (unsigned char)147;
long long int var_14 = 6528058051162761938LL;
int zero = 0;
signed char var_15 = (signed char)-94;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)189;
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
