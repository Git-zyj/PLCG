#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
unsigned short var_1 = (unsigned short)39112;
unsigned long long int var_2 = 10598733113087720344ULL;
long long int var_13 = -3397230402413032669LL;
int zero = 0;
unsigned long long int var_15 = 17234831195550120365ULL;
unsigned char var_16 = (unsigned char)22;
unsigned int var_17 = 3691157122U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
