#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_5 = (signed char)-115;
long long int var_6 = 2652796264073905330LL;
signed char var_9 = (signed char)-52;
unsigned short var_10 = (unsigned short)8640;
unsigned int var_11 = 1240855129U;
int zero = 0;
unsigned char var_14 = (unsigned char)44;
unsigned char var_15 = (unsigned char)5;
int var_16 = 1651562237;
unsigned short var_17 = (unsigned short)22753;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
