#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)41201;
unsigned int var_8 = 3878832723U;
int var_11 = -1199521453;
int var_16 = -338250266;
int zero = 0;
unsigned int var_17 = 2614074113U;
unsigned char var_18 = (unsigned char)92;
long long int var_19 = -6806307905088537454LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
