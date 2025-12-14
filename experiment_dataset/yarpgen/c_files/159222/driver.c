#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3272520761U;
short var_11 = (short)-14560;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_14 = -1229417882;
long long int var_15 = 5916259330804797884LL;
int var_16 = -897134855;
unsigned char var_17 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
