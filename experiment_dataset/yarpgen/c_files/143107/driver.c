#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1956950042U;
unsigned char var_4 = (unsigned char)26;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1753671033U;
unsigned char var_11 = (unsigned char)105;
int var_13 = 1578405919;
int zero = 0;
unsigned long long int var_14 = 524195705903598582ULL;
long long int var_15 = 9059066348833813241LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
