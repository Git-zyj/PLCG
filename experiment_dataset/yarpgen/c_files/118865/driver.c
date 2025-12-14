#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63196;
unsigned short var_3 = (unsigned short)18222;
short var_4 = (short)-28043;
unsigned char var_5 = (unsigned char)108;
unsigned short var_6 = (unsigned short)37291;
unsigned short var_8 = (unsigned short)20325;
short var_9 = (short)1145;
int zero = 0;
unsigned char var_10 = (unsigned char)71;
int var_11 = 822971813;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
