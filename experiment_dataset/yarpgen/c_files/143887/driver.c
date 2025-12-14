#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20267;
long long int var_2 = 3467611978893688481LL;
unsigned char var_4 = (unsigned char)61;
unsigned int var_6 = 3015971235U;
short var_8 = (short)3888;
unsigned short var_12 = (unsigned short)16121;
long long int var_14 = -2277950426235391737LL;
int zero = 0;
long long int var_15 = -2967415390628202055LL;
long long int var_16 = 7526945437142811698LL;
unsigned char var_17 = (unsigned char)62;
long long int var_18 = -8074396792534025106LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
