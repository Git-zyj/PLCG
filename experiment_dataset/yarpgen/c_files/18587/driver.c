#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5584141037468008103LL;
int var_7 = 432630640;
unsigned int var_10 = 2945211595U;
int zero = 0;
short var_11 = (short)-4560;
unsigned char var_12 = (unsigned char)162;
unsigned int var_13 = 550832227U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
