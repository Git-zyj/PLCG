#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
long long int var_7 = -7982401973263436640LL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)33;
signed char var_12 = (signed char)74;
unsigned int var_16 = 3939011371U;
short var_17 = (short)625;
int zero = 0;
int var_18 = -1695908500;
long long int var_19 = -585128802586538320LL;
signed char var_20 = (signed char)7;
unsigned char var_21 = (unsigned char)132;
unsigned long long int var_22 = 3404174043720365562ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
