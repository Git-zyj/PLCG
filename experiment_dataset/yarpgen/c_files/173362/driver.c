#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1515499378730079646ULL;
short var_1 = (short)6344;
short var_2 = (short)6903;
int var_3 = 1634632966;
short var_4 = (short)-11526;
unsigned int var_5 = 4120435922U;
unsigned int var_6 = 3008979352U;
unsigned short var_11 = (unsigned short)44851;
unsigned int var_12 = 3690821394U;
int zero = 0;
unsigned int var_14 = 2787092791U;
unsigned long long int var_15 = 15569748196668874672ULL;
unsigned char var_16 = (unsigned char)245;
unsigned char var_17 = (unsigned char)136;
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
