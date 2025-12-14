#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)135;
unsigned char var_3 = (unsigned char)89;
unsigned short var_4 = (unsigned short)65183;
unsigned char var_9 = (unsigned char)205;
int zero = 0;
unsigned short var_10 = (unsigned short)16756;
long long int var_11 = 2084824060640321431LL;
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
