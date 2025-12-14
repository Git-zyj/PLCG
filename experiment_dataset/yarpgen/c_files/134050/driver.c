#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
signed char var_2 = (signed char)-40;
_Bool var_5 = (_Bool)1;
unsigned char var_10 = (unsigned char)252;
int zero = 0;
unsigned char var_16 = (unsigned char)171;
short var_17 = (short)-25722;
signed char var_18 = (signed char)-36;
void init() {
}

void checksum() {
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
