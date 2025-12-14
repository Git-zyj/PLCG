#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
long long int var_1 = -8048094310085186649LL;
int var_4 = -806424555;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)58384;
unsigned char var_10 = (unsigned char)218;
int var_11 = -1701906141;
signed char var_12 = (signed char)-57;
long long int var_13 = -4449818157961421159LL;
int zero = 0;
unsigned char var_14 = (unsigned char)188;
short var_15 = (short)4160;
unsigned int var_16 = 4083418751U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
