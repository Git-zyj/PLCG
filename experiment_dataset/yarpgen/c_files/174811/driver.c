#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)201;
unsigned short var_6 = (unsigned short)39382;
unsigned char var_10 = (unsigned char)140;
unsigned short var_13 = (unsigned short)42118;
unsigned short var_14 = (unsigned short)17111;
long long int var_16 = 781506685494160436LL;
int zero = 0;
long long int var_20 = -1343658350013134608LL;
unsigned short var_21 = (unsigned short)45566;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
