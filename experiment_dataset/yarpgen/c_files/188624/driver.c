#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_5 = 81330331;
int var_6 = 1493082071;
signed char var_8 = (signed char)-64;
unsigned short var_9 = (unsigned short)37448;
unsigned short var_11 = (unsigned short)20307;
signed char var_12 = (signed char)-34;
signed char var_14 = (signed char)-36;
int zero = 0;
unsigned long long int var_18 = 459987272447236983ULL;
_Bool var_19 = (_Bool)1;
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
