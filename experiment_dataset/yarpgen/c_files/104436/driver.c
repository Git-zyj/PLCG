#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 662055716673855679LL;
unsigned short var_7 = (unsigned short)31676;
signed char var_8 = (signed char)62;
int zero = 0;
unsigned int var_15 = 2065775004U;
signed char var_16 = (signed char)-36;
void init() {
}

void checksum() {
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
