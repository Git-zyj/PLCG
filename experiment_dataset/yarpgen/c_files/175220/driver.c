#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1813;
unsigned char var_4 = (unsigned char)19;
int var_9 = 1951846134;
unsigned char var_12 = (unsigned char)32;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 13257468641979073231ULL;
void init() {
}

void checksum() {
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
