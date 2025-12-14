#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-123;
unsigned char var_8 = (unsigned char)211;
int var_16 = 875581159;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 6889823758904769088ULL;
int var_20 = -662383515;
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
