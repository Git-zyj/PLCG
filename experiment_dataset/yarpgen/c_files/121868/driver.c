#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55011;
unsigned int var_1 = 2110383261U;
unsigned short var_3 = (unsigned short)40018;
unsigned char var_5 = (unsigned char)22;
unsigned int var_6 = 3858542388U;
unsigned char var_7 = (unsigned char)207;
long long int var_8 = -6203752342790706275LL;
int zero = 0;
unsigned int var_10 = 646835171U;
unsigned char var_11 = (unsigned char)61;
unsigned int var_12 = 3210765622U;
unsigned char var_13 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
