#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30385;
unsigned long long int var_8 = 2307432296733004212ULL;
unsigned char var_14 = (unsigned char)28;
int zero = 0;
unsigned char var_15 = (unsigned char)55;
unsigned char var_16 = (unsigned char)121;
long long int var_17 = -1214195115124106162LL;
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
