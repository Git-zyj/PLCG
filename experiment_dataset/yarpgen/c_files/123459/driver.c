#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4321076930740205663ULL;
unsigned char var_4 = (unsigned char)154;
unsigned int var_8 = 1243617890U;
int zero = 0;
unsigned int var_10 = 1767690711U;
signed char var_11 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
