#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1657518645U;
unsigned char var_4 = (unsigned char)2;
signed char var_6 = (signed char)126;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 4877470094900242959ULL;
signed char var_20 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
