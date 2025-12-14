#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
unsigned long long int var_11 = 2909144686018117816ULL;
unsigned long long int var_15 = 8740092090623745179ULL;
int zero = 0;
short var_20 = (short)427;
unsigned char var_21 = (unsigned char)159;
unsigned short var_22 = (unsigned short)26084;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
