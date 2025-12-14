#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1210155099;
unsigned short var_4 = (unsigned short)24077;
unsigned long long int var_5 = 12256200617239997848ULL;
unsigned short var_6 = (unsigned short)53601;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 6700998284604156231LL;
unsigned char var_12 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
