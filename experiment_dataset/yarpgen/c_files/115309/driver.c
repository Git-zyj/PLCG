#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5037724598750139409ULL;
short var_1 = (short)-10543;
short var_6 = (short)1302;
int zero = 0;
unsigned char var_19 = (unsigned char)209;
short var_20 = (short)9652;
unsigned short var_21 = (unsigned short)19518;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
