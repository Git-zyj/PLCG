#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3224890793U;
_Bool var_1 = (_Bool)0;
unsigned int var_8 = 2171177993U;
int zero = 0;
long long int var_14 = -1516848030875871632LL;
unsigned short var_15 = (unsigned short)63304;
signed char var_16 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
