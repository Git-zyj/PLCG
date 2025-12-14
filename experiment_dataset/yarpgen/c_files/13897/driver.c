#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49798;
long long int var_6 = 286677480249084140LL;
unsigned int var_8 = 2917416692U;
_Bool var_9 = (_Bool)1;
short var_14 = (short)-3692;
unsigned char var_15 = (unsigned char)142;
int zero = 0;
unsigned char var_16 = (unsigned char)38;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
