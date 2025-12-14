#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 574259960;
long long int var_6 = 2453970580020331456LL;
unsigned short var_7 = (unsigned short)2157;
unsigned short var_8 = (unsigned short)10063;
unsigned char var_10 = (unsigned char)25;
unsigned char var_12 = (unsigned char)121;
unsigned short var_13 = (unsigned short)45288;
unsigned short var_14 = (unsigned short)63154;
int zero = 0;
unsigned short var_15 = (unsigned short)11623;
unsigned char var_16 = (unsigned char)96;
long long int var_17 = -1406720723709793661LL;
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
