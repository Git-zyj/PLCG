#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8478735793955223502LL;
_Bool var_1 = (_Bool)1;
signed char var_7 = (signed char)-10;
int var_8 = -1775427160;
int var_10 = 1371136259;
int var_13 = 372846335;
int zero = 0;
long long int var_14 = -6404100971251340904LL;
unsigned int var_15 = 3578531878U;
signed char var_16 = (signed char)-14;
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
