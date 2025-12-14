#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
unsigned short var_1 = (unsigned short)53204;
short var_5 = (short)-3236;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
long long int var_9 = -7480706762106961743LL;
short var_11 = (short)30539;
unsigned int var_12 = 221205348U;
int var_13 = 1914133953;
long long int var_14 = 12773111179218255LL;
int zero = 0;
unsigned short var_15 = (unsigned short)15600;
unsigned short var_16 = (unsigned short)37227;
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
