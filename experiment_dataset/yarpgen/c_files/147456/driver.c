#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1938411421446457690ULL;
unsigned short var_9 = (unsigned short)17634;
int zero = 0;
unsigned long long int var_12 = 3442135599004926804ULL;
unsigned long long int var_13 = 18386728650614201512ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
