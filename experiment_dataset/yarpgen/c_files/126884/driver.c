#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2136405234U;
unsigned int var_7 = 1107554795U;
unsigned short var_8 = (unsigned short)35701;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 3915772249161525022ULL;
unsigned short var_15 = (unsigned short)57893;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
