#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14752;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)9722;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)3090;
signed char var_19 = (signed char)-16;
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
