#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)45384;
unsigned short var_4 = (unsigned short)62258;
unsigned long long int var_6 = 11845029877244822579ULL;
unsigned short var_9 = (unsigned short)47305;
int zero = 0;
unsigned char var_11 = (unsigned char)188;
long long int var_12 = -3459411232182969911LL;
unsigned int var_13 = 1685273075U;
void init() {
}

void checksum() {
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
