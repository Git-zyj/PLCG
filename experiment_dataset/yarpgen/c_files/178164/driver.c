#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10379;
long long int var_8 = -5045386245666153068LL;
unsigned char var_9 = (unsigned char)207;
unsigned char var_12 = (unsigned char)178;
short var_13 = (short)30982;
int zero = 0;
long long int var_18 = 1197281713291973245LL;
long long int var_19 = 1669373169240665516LL;
void init() {
}

void checksum() {
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
