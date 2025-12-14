#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_7 = 1766676032;
long long int var_8 = 1771885667404113050LL;
signed char var_9 = (signed char)-76;
int zero = 0;
unsigned short var_12 = (unsigned short)35256;
unsigned long long int var_13 = 16760092259108696482ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
