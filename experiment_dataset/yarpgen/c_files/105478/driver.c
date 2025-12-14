#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7861787386700366867LL;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)2297;
int zero = 0;
signed char var_12 = (signed char)-97;
unsigned long long int var_13 = 5255167306121284045ULL;
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
