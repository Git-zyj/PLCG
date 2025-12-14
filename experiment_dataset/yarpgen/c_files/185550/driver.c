#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2545703944U;
unsigned char var_6 = (unsigned char)77;
unsigned char var_11 = (unsigned char)48;
unsigned long long int var_12 = 7237640465755354384ULL;
int var_15 = 74231093;
short var_16 = (short)-16487;
unsigned long long int var_17 = 17981444378047854103ULL;
int zero = 0;
int var_18 = 6973442;
unsigned int var_19 = 3707441674U;
unsigned short var_20 = (unsigned short)51225;
short var_21 = (short)3356;
long long int var_22 = 999548251920091034LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
