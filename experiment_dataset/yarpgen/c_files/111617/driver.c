#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)139;
short var_9 = (short)-9734;
int var_12 = -1517125012;
long long int var_14 = 7760214371816495047LL;
int zero = 0;
signed char var_15 = (signed char)-55;
unsigned short var_16 = (unsigned short)32164;
short var_17 = (short)-30666;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
