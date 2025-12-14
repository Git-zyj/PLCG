#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 9141552334214790219LL;
int var_10 = 2001990710;
unsigned char var_12 = (unsigned char)84;
int zero = 0;
short var_16 = (short)-5192;
unsigned char var_17 = (unsigned char)57;
void init() {
}

void checksum() {
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
