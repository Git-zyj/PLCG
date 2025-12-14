#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
short var_1 = (short)19002;
unsigned char var_4 = (unsigned char)27;
short var_6 = (short)-30748;
short var_8 = (short)18418;
short var_9 = (short)11917;
unsigned char var_13 = (unsigned char)188;
int zero = 0;
unsigned char var_14 = (unsigned char)66;
unsigned char var_15 = (unsigned char)83;
unsigned char var_16 = (unsigned char)164;
unsigned char var_17 = (unsigned char)77;
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
