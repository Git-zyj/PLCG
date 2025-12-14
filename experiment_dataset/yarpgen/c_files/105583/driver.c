#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -42995459;
short var_3 = (short)8260;
unsigned long long int var_7 = 14572383069756960205ULL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)23279;
unsigned char var_13 = (unsigned char)15;
unsigned char var_14 = (unsigned char)212;
int zero = 0;
short var_17 = (short)3953;
unsigned int var_18 = 719163602U;
int var_19 = -362308002;
unsigned short var_20 = (unsigned short)19760;
unsigned long long int var_21 = 14801921898290034885ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
