#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)112;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)109;
unsigned char var_8 = (unsigned char)19;
int zero = 0;
unsigned long long int var_15 = 546929967461945563ULL;
signed char var_16 = (signed char)-25;
signed char var_17 = (signed char)95;
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
