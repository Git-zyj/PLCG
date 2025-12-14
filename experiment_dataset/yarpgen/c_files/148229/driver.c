#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)69;
unsigned long long int var_5 = 11374408257769175204ULL;
short var_7 = (short)-14852;
unsigned long long int var_10 = 6434776526826160879ULL;
unsigned short var_11 = (unsigned short)4813;
int zero = 0;
long long int var_12 = -314803964580738291LL;
unsigned int var_13 = 994631207U;
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
