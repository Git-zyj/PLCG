#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 352042529;
unsigned char var_1 = (unsigned char)45;
short var_2 = (short)18825;
int var_3 = -1407544560;
long long int var_6 = 8064536657741234406LL;
signed char var_10 = (signed char)107;
int zero = 0;
unsigned short var_15 = (unsigned short)16877;
long long int var_16 = 7508930016133527666LL;
unsigned char var_17 = (unsigned char)199;
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
