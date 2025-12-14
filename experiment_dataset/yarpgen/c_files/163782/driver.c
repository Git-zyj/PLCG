#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14268008938559848396ULL;
unsigned long long int var_8 = 17800809491574517266ULL;
unsigned long long int var_9 = 6246437483893751553ULL;
unsigned long long int var_12 = 5525462778721405277ULL;
unsigned long long int var_13 = 8704933660295049638ULL;
unsigned long long int var_14 = 16193505508757022444ULL;
signed char var_15 = (signed char)74;
unsigned long long int var_18 = 4281020944112669936ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)33427;
signed char var_20 = (signed char)106;
signed char var_21 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
