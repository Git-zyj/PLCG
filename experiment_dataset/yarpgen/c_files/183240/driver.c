#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15364672904937074929ULL;
long long int var_5 = 8710972055143931479LL;
unsigned int var_7 = 2583711922U;
int zero = 0;
unsigned long long int var_13 = 15730221965423615029ULL;
short var_14 = (short)4195;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
