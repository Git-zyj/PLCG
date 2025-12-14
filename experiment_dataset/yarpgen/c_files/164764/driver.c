#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)11293;
short var_7 = (short)24795;
unsigned short var_12 = (unsigned short)60110;
int zero = 0;
int var_17 = 68560137;
unsigned char var_18 = (unsigned char)202;
short var_19 = (short)-31243;
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
