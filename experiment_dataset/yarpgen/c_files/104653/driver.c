#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)1284;
long long int var_8 = 8836181948081532277LL;
long long int var_9 = -7033844487721319619LL;
unsigned char var_14 = (unsigned char)121;
int zero = 0;
unsigned int var_15 = 632905150U;
long long int var_16 = -6505621959766065080LL;
void init() {
}

void checksum() {
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
