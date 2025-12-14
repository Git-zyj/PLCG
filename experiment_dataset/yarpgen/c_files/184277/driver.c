#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29140;
_Bool var_4 = (_Bool)0;
unsigned int var_8 = 1468225031U;
unsigned char var_10 = (unsigned char)53;
unsigned short var_11 = (unsigned short)40570;
unsigned int var_12 = 720695120U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1564125222U;
void init() {
}

void checksum() {
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
