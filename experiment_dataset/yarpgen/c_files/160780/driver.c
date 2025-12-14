#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5835847911259273805LL;
unsigned int var_6 = 1856986575U;
int zero = 0;
long long int var_16 = 456070660875563750LL;
unsigned char var_17 = (unsigned char)155;
unsigned int var_18 = 704890654U;
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
