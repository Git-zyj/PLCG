#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1178678594;
long long int var_7 = 7738838159427549135LL;
unsigned char var_10 = (unsigned char)155;
int zero = 0;
signed char var_18 = (signed char)43;
signed char var_19 = (signed char)85;
unsigned char var_20 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
