#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)65;
long long int var_6 = 1216051448209925047LL;
unsigned short var_7 = (unsigned short)7151;
unsigned char var_10 = (unsigned char)100;
short var_11 = (short)12886;
int zero = 0;
long long int var_15 = -3544566880973473337LL;
unsigned long long int var_16 = 14090757151880521722ULL;
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
