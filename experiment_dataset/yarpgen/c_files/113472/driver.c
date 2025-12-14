#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8595157403103581200LL;
unsigned short var_6 = (unsigned short)35845;
long long int var_9 = 8210592384562900406LL;
unsigned short var_11 = (unsigned short)14385;
unsigned short var_16 = (unsigned short)55252;
int zero = 0;
unsigned char var_17 = (unsigned char)91;
unsigned char var_18 = (unsigned char)76;
unsigned long long int var_19 = 18180704229910060189ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
