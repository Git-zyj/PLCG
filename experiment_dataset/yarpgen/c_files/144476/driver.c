#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5870055905660845427LL;
unsigned short var_4 = (unsigned short)10954;
unsigned short var_8 = (unsigned short)9553;
int var_9 = 2118956223;
long long int var_11 = -2183646523781286892LL;
unsigned short var_15 = (unsigned short)60152;
unsigned short var_17 = (unsigned short)6403;
int zero = 0;
short var_18 = (short)30071;
long long int var_19 = 3605156476318337953LL;
unsigned short var_20 = (unsigned short)44710;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
