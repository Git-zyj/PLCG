#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)22498;
unsigned char var_6 = (unsigned char)216;
int zero = 0;
unsigned long long int var_13 = 16028355356164408932ULL;
long long int var_14 = -5344556222793354450LL;
unsigned char var_15 = (unsigned char)41;
unsigned char var_16 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
