#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3102304044387260998LL;
signed char var_6 = (signed char)-10;
unsigned short var_11 = (unsigned short)18920;
int zero = 0;
unsigned long long int var_17 = 1471584859723321242ULL;
int var_18 = 32482824;
void init() {
}

void checksum() {
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
