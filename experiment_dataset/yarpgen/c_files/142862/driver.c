#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9071595296465391077ULL;
long long int var_11 = 2633542140536762722LL;
unsigned long long int var_12 = 12930398610770740252ULL;
int zero = 0;
signed char var_13 = (signed char)-21;
unsigned int var_14 = 1741586262U;
unsigned char var_15 = (unsigned char)188;
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
