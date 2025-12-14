#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5993462663425770925LL;
unsigned char var_7 = (unsigned char)97;
unsigned int var_8 = 1627178538U;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 1937973574U;
int zero = 0;
long long int var_19 = 1663034768800764278LL;
short var_20 = (short)26246;
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
