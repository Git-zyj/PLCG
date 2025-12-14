#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)211;
unsigned long long int var_12 = 12958524466351047578ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)131;
unsigned long long int var_17 = 1216546466652862683ULL;
unsigned long long int var_18 = 13088690449733026645ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
