#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8663148136521406629LL;
unsigned int var_2 = 2499411111U;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)8636;
unsigned short var_10 = (unsigned short)37497;
unsigned int var_12 = 4012191066U;
short var_16 = (short)21550;
int zero = 0;
unsigned int var_20 = 281908045U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
