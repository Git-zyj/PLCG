#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30256;
signed char var_1 = (signed char)121;
unsigned long long int var_3 = 6576498879805872466ULL;
unsigned int var_5 = 1071378884U;
unsigned int var_10 = 267281025U;
int zero = 0;
unsigned long long int var_11 = 9929624951226747027ULL;
unsigned int var_12 = 4040147239U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
