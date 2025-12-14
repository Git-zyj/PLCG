#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1010626611U;
unsigned short var_8 = (unsigned short)31147;
unsigned long long int var_14 = 1702356377929811091ULL;
unsigned int var_16 = 720158341U;
int var_17 = -1199508709;
int zero = 0;
unsigned int var_19 = 1894296195U;
signed char var_20 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
