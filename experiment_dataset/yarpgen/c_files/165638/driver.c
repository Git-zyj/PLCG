#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)109;
unsigned long long int var_3 = 5928260964743461051ULL;
unsigned char var_8 = (unsigned char)30;
int var_10 = -1439000772;
_Bool var_11 = (_Bool)0;
short var_12 = (short)8156;
int zero = 0;
unsigned char var_14 = (unsigned char)189;
unsigned long long int var_15 = 17069674369906344250ULL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)56;
unsigned short var_18 = (unsigned short)27250;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
