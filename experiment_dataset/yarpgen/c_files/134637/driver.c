#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)114;
unsigned long long int var_7 = 17469272577369996615ULL;
signed char var_8 = (signed char)3;
int zero = 0;
short var_10 = (short)31187;
unsigned int var_11 = 2726221991U;
unsigned short var_12 = (unsigned short)39185;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
