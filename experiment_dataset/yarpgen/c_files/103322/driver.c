#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2012;
long long int var_1 = -560024764996240200LL;
_Bool var_3 = (_Bool)0;
long long int var_4 = 492563253624830193LL;
unsigned short var_5 = (unsigned short)56050;
_Bool var_7 = (_Bool)1;
int var_8 = 978188324;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)220;
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
