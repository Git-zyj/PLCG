#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 276322479U;
unsigned char var_2 = (unsigned char)61;
unsigned short var_11 = (unsigned short)17323;
int zero = 0;
long long int var_12 = 8970785958864876663LL;
unsigned long long int var_13 = 3837079708389136762ULL;
unsigned short var_14 = (unsigned short)5996;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
