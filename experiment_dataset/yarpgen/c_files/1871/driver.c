#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 448855639U;
unsigned short var_4 = (unsigned short)1204;
unsigned short var_6 = (unsigned short)7047;
unsigned char var_7 = (unsigned char)42;
short var_8 = (short)-18971;
unsigned short var_12 = (unsigned short)3926;
unsigned char var_16 = (unsigned char)213;
int zero = 0;
long long int var_17 = 2236763752378489260LL;
unsigned char var_18 = (unsigned char)228;
unsigned short var_19 = (unsigned short)3709;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
