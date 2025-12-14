#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)112;
short var_8 = (short)25287;
long long int var_10 = -4499634630534150787LL;
unsigned long long int var_16 = 9405579700120026345ULL;
long long int var_17 = 6993614717082839409LL;
int zero = 0;
long long int var_19 = -2755072813243105602LL;
unsigned char var_20 = (unsigned char)131;
void init() {
}

void checksum() {
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
