#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)113;
signed char var_3 = (signed char)29;
short var_6 = (short)5266;
unsigned char var_9 = (unsigned char)74;
unsigned short var_12 = (unsigned short)25749;
int zero = 0;
unsigned char var_17 = (unsigned char)93;
unsigned short var_18 = (unsigned short)18180;
signed char var_19 = (signed char)95;
unsigned char var_20 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
