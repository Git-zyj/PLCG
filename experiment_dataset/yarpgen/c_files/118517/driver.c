#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
unsigned long long int var_5 = 10777547607466968277ULL;
signed char var_7 = (signed char)79;
unsigned short var_8 = (unsigned short)35117;
long long int var_13 = -6686960979674167348LL;
short var_15 = (short)7800;
int zero = 0;
signed char var_20 = (signed char)125;
int var_21 = 642967585;
signed char var_22 = (signed char)65;
unsigned short var_23 = (unsigned short)2312;
unsigned int var_24 = 3312875911U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
