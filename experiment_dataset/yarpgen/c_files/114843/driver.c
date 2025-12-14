#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63295;
int var_3 = 1954344363;
long long int var_4 = 9044840132368915823LL;
int var_7 = 1744060300;
int var_8 = 429941272;
int var_10 = -183521856;
int zero = 0;
unsigned char var_16 = (unsigned char)190;
int var_17 = 1224737420;
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
