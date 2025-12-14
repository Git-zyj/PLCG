#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2422052621285007393LL;
unsigned short var_1 = (unsigned short)3327;
unsigned long long int var_2 = 7314689596875069550ULL;
unsigned long long int var_3 = 5849140817371768763ULL;
unsigned short var_9 = (unsigned short)52205;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 3955996659U;
unsigned char var_17 = (unsigned char)8;
void init() {
}

void checksum() {
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
