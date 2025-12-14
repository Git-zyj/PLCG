#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)165;
signed char var_3 = (signed char)-25;
signed char var_5 = (signed char)53;
int var_6 = 948263554;
long long int var_8 = -7604044972471458142LL;
unsigned char var_10 = (unsigned char)150;
unsigned int var_13 = 2915958617U;
int zero = 0;
unsigned long long int var_15 = 16211766011463721893ULL;
int var_16 = -1842485273;
unsigned char var_17 = (unsigned char)10;
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
