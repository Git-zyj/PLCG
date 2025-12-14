#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)187;
unsigned int var_4 = 1205524033U;
unsigned long long int var_5 = 12857450852553363493ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 483243747688752175ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_15 = 2958589894104671032ULL;
unsigned char var_17 = (unsigned char)132;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)16741;
unsigned long long int var_22 = 2466226917540440480ULL;
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
