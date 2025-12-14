#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)24790;
short var_13 = (short)22684;
short var_15 = (short)29084;
int zero = 0;
unsigned int var_18 = 1230912114U;
unsigned char var_19 = (unsigned char)55;
signed char var_20 = (signed char)-48;
int var_21 = -219173504;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
