#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -476766214;
unsigned short var_9 = (unsigned short)2580;
int zero = 0;
unsigned char var_14 = (unsigned char)63;
long long int var_15 = 3277417631668831394LL;
unsigned long long int var_16 = 1173620006695337076ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
