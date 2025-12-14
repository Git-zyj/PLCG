#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3928331833599844280LL;
long long int var_11 = -824521985350779696LL;
unsigned int var_13 = 3059425677U;
int zero = 0;
signed char var_16 = (signed char)58;
unsigned int var_17 = 2577396581U;
long long int var_18 = 8316843628381607728LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
