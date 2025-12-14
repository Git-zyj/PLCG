#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1253244920010246877LL;
unsigned short var_5 = (unsigned short)26893;
signed char var_6 = (signed char)34;
signed char var_13 = (signed char)-29;
int zero = 0;
long long int var_14 = 8914643198462832258LL;
unsigned short var_15 = (unsigned short)55031;
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
