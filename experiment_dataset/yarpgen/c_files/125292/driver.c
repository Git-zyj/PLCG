#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2700114967U;
unsigned long long int var_3 = 17120653776158459903ULL;
unsigned long long int var_5 = 10676084070908674956ULL;
unsigned int var_12 = 1658423471U;
int zero = 0;
signed char var_16 = (signed char)-71;
unsigned long long int var_17 = 5429037319780232729ULL;
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
