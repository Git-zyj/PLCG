#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6413970051086698163LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 671125152594265684ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)78;
short var_11 = (short)1965;
int zero = 0;
unsigned short var_12 = (unsigned short)41602;
unsigned short var_13 = (unsigned short)34032;
long long int var_14 = -2347999476536568359LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
