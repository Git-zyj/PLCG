#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)17595;
unsigned int var_13 = 3009994582U;
short var_14 = (short)15986;
int zero = 0;
unsigned short var_17 = (unsigned short)53560;
short var_18 = (short)2942;
unsigned char var_19 = (unsigned char)98;
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
