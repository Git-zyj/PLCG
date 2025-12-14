#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4732274317623797857ULL;
long long int var_8 = 5430998353623796319LL;
int var_13 = 468040044;
int zero = 0;
unsigned short var_15 = (unsigned short)50672;
unsigned long long int var_16 = 10583051608288716696ULL;
int var_17 = 412386227;
void init() {
}

void checksum() {
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
