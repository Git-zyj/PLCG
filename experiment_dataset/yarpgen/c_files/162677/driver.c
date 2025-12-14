#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -798792417;
unsigned short var_1 = (unsigned short)52308;
unsigned char var_5 = (unsigned char)94;
unsigned long long int var_6 = 2185539249354003275ULL;
short var_10 = (short)-5293;
short var_12 = (short)12826;
int zero = 0;
long long int var_13 = 385516678950895292LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
