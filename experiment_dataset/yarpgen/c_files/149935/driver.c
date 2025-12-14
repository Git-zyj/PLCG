#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 202129310U;
unsigned short var_3 = (unsigned short)8594;
short var_7 = (short)-10164;
unsigned int var_9 = 2811157788U;
int zero = 0;
unsigned int var_10 = 2665532317U;
unsigned char var_11 = (unsigned char)145;
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
