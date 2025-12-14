#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7422310317729802923ULL;
unsigned int var_8 = 3227801112U;
unsigned int var_9 = 2009364817U;
unsigned char var_11 = (unsigned char)17;
int zero = 0;
short var_15 = (short)1809;
unsigned int var_16 = 721094209U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
