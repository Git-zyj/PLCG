#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
unsigned char var_2 = (unsigned char)138;
signed char var_4 = (signed char)91;
unsigned int var_7 = 621069119U;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)27645;
unsigned int var_11 = 4157824147U;
int var_13 = -876151153;
long long int var_14 = -7651392662918499893LL;
int var_15 = -2120408054;
int zero = 0;
unsigned int var_16 = 2283015307U;
short var_17 = (short)-20258;
_Bool var_18 = (_Bool)0;
int var_19 = 697457440;
unsigned int var_20 = 3927331322U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
