#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
unsigned char var_9 = (unsigned char)188;
unsigned char var_11 = (unsigned char)23;
unsigned long long int var_12 = 8932594012875826078ULL;
unsigned int var_14 = 1550556711U;
int zero = 0;
unsigned short var_15 = (unsigned short)29101;
unsigned int var_16 = 2078849749U;
unsigned int var_17 = 357805610U;
long long int var_18 = 6615558602543492616LL;
unsigned long long int var_19 = 12372633918733694433ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
