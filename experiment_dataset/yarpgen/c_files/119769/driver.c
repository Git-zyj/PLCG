#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)111;
unsigned char var_6 = (unsigned char)176;
unsigned char var_7 = (unsigned char)52;
unsigned char var_8 = (unsigned char)157;
unsigned int var_10 = 1050045911U;
int zero = 0;
unsigned int var_12 = 3305322101U;
unsigned long long int var_13 = 5940123963641163130ULL;
unsigned long long int var_14 = 6326465405087464909ULL;
unsigned long long int var_15 = 2353253199280660127ULL;
short var_16 = (short)23222;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
