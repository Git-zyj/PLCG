#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3484892511U;
long long int var_2 = -1434212099217195847LL;
unsigned int var_4 = 1631403048U;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)170;
int var_7 = -127273807;
long long int var_8 = -2438150084122844535LL;
unsigned int var_9 = 2955640229U;
unsigned char var_12 = (unsigned char)158;
long long int var_13 = -6860905320267258026LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 664490651U;
short var_16 = (short)-29512;
unsigned long long int var_17 = 4468162116180496507ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
