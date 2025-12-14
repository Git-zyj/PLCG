#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1319261565198169940ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_9 = 2522505175U;
unsigned int var_11 = 910900530U;
unsigned short var_17 = (unsigned short)6599;
unsigned short var_19 = (unsigned short)39746;
int zero = 0;
unsigned int var_20 = 2856953637U;
unsigned char var_21 = (unsigned char)227;
void init() {
}

void checksum() {
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
