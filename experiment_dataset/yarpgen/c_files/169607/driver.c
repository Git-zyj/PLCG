#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29914;
short var_3 = (short)28667;
long long int var_4 = 5684533677693405564LL;
unsigned short var_5 = (unsigned short)25933;
unsigned int var_10 = 613625982U;
int zero = 0;
unsigned char var_16 = (unsigned char)108;
unsigned short var_17 = (unsigned short)46889;
int var_18 = 1047792369;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
