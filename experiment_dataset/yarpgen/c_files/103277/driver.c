#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-420;
unsigned int var_3 = 2068100147U;
short var_5 = (short)5277;
unsigned short var_9 = (unsigned short)3810;
unsigned char var_10 = (unsigned char)135;
int zero = 0;
unsigned int var_17 = 2904384316U;
unsigned int var_18 = 2071417130U;
unsigned int var_19 = 4154795660U;
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
