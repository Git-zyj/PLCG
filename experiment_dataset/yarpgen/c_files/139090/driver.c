#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17534738342066836566ULL;
unsigned char var_1 = (unsigned char)96;
unsigned short var_2 = (unsigned short)35705;
short var_3 = (short)32158;
int var_4 = -266915233;
signed char var_9 = (signed char)-13;
unsigned short var_12 = (unsigned short)25079;
int var_14 = -1996185280;
int zero = 0;
unsigned short var_17 = (unsigned short)49804;
unsigned short var_18 = (unsigned short)59350;
void init() {
}

void checksum() {
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
