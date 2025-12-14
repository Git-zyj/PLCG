#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1260957948;
long long int var_4 = 2703451503259474409LL;
signed char var_10 = (signed char)1;
int zero = 0;
unsigned short var_16 = (unsigned short)60310;
unsigned long long int var_17 = 4942523516398178059ULL;
void init() {
}

void checksum() {
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
