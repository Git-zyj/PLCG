#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34434;
unsigned short var_7 = (unsigned short)35407;
int var_8 = 1556143793;
int var_9 = -1653351692;
unsigned int var_10 = 4087144034U;
short var_12 = (short)23942;
int var_15 = -453001754;
int zero = 0;
unsigned long long int var_17 = 1683858715242224029ULL;
unsigned short var_18 = (unsigned short)6172;
unsigned int var_19 = 2666011780U;
int var_20 = -269832022;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
