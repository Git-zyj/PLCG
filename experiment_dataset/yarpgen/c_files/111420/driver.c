#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)23559;
long long int var_10 = 8101055345100334584LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)110;
short var_14 = (short)31465;
int zero = 0;
unsigned char var_15 = (unsigned char)170;
long long int var_16 = 7190442911571799646LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
