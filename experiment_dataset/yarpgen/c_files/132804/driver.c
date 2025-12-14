#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1007008959;
unsigned char var_15 = (unsigned char)50;
unsigned short var_16 = (unsigned short)53952;
int zero = 0;
unsigned short var_18 = (unsigned short)1594;
unsigned char var_19 = (unsigned char)120;
unsigned int var_20 = 1025988663U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
