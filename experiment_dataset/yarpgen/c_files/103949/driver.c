#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1230523837843896970ULL;
int var_9 = -1501288328;
unsigned short var_12 = (unsigned short)28574;
int var_14 = 1711430746;
int zero = 0;
int var_16 = 287262021;
unsigned char var_17 = (unsigned char)157;
unsigned short var_18 = (unsigned short)62547;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
