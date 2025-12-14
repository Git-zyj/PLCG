#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)228;
unsigned char var_6 = (unsigned char)219;
unsigned char var_9 = (unsigned char)19;
unsigned char var_10 = (unsigned char)3;
unsigned char var_12 = (unsigned char)213;
int zero = 0;
unsigned short var_15 = (unsigned short)22250;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
