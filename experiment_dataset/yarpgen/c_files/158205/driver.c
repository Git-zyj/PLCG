#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10709358915509187023ULL;
short var_8 = (short)22285;
unsigned int var_12 = 1053557258U;
int zero = 0;
unsigned short var_13 = (unsigned short)64319;
long long int var_14 = -3402900875524155035LL;
long long int var_15 = 7091556156504223528LL;
unsigned short var_16 = (unsigned short)41479;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
