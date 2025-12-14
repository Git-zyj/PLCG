#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8759790067652950844LL;
unsigned short var_2 = (unsigned short)53352;
int var_3 = -512528428;
short var_4 = (short)-15634;
unsigned int var_5 = 2475297752U;
int var_10 = -1166496531;
unsigned short var_11 = (unsigned short)62507;
short var_12 = (short)-28002;
int zero = 0;
short var_13 = (short)4790;
short var_14 = (short)2117;
unsigned char var_15 = (unsigned char)226;
int var_16 = -927998374;
unsigned char var_17 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
