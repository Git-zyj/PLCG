#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3517329724577182716LL;
unsigned long long int var_4 = 1159945955925716020ULL;
unsigned int var_5 = 3291618918U;
unsigned int var_8 = 3972182670U;
long long int var_12 = 2949613243752036608LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)147;
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
