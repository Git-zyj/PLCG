#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8731642414617441278LL;
unsigned char var_5 = (unsigned char)87;
long long int var_7 = -1595605402332908243LL;
unsigned long long int var_10 = 1563220304932502379ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)223;
unsigned short var_12 = (unsigned short)33959;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
