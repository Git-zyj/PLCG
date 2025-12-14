#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1044660447;
short var_1 = (short)897;
unsigned short var_7 = (unsigned short)8098;
signed char var_9 = (signed char)-43;
unsigned char var_11 = (unsigned char)108;
short var_15 = (short)21644;
int zero = 0;
unsigned short var_16 = (unsigned short)16612;
unsigned short var_17 = (unsigned short)24597;
void init() {
}

void checksum() {
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
