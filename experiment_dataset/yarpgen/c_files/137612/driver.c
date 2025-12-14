#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)40559;
unsigned char var_7 = (unsigned char)7;
int zero = 0;
long long int var_11 = -5641675334064685877LL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 11001947880867319192ULL;
long long int var_15 = -9174480363884260993LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
