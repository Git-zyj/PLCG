#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2408656789714776038LL;
short var_3 = (short)-25531;
unsigned char var_5 = (unsigned char)75;
unsigned int var_6 = 3595808846U;
int zero = 0;
unsigned short var_12 = (unsigned short)56592;
unsigned short var_13 = (unsigned short)10635;
unsigned char var_14 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
