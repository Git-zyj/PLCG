#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13375253501464854386ULL;
unsigned char var_7 = (unsigned char)247;
unsigned short var_8 = (unsigned short)39338;
unsigned int var_9 = 1028260547U;
_Bool var_14 = (_Bool)1;
short var_15 = (short)16108;
unsigned char var_16 = (unsigned char)202;
long long int var_17 = -4601849035714805000LL;
int zero = 0;
int var_20 = -1551882123;
long long int var_21 = 3132779211607047354LL;
short var_22 = (short)-24417;
void init() {
}

void checksum() {
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
