#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)0;
unsigned int var_3 = 3933346458U;
unsigned short var_4 = (unsigned short)13565;
unsigned char var_7 = (unsigned char)11;
unsigned short var_9 = (unsigned short)10857;
unsigned char var_10 = (unsigned char)25;
int zero = 0;
unsigned char var_15 = (unsigned char)24;
signed char var_16 = (signed char)85;
short var_17 = (short)17517;
unsigned int var_18 = 2366485768U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
