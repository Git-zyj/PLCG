#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3448323851711730408LL;
unsigned char var_4 = (unsigned char)131;
unsigned char var_5 = (unsigned char)158;
unsigned long long int var_7 = 3055838360688604055ULL;
unsigned short var_9 = (unsigned short)59429;
int zero = 0;
short var_12 = (short)-32448;
long long int var_13 = 8987647650714212366LL;
long long int var_14 = -8582329536689149599LL;
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
