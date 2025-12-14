#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
unsigned short var_2 = (unsigned short)26347;
unsigned char var_5 = (unsigned char)189;
unsigned int var_6 = 2100333824U;
short var_8 = (short)1850;
unsigned char var_9 = (unsigned char)230;
unsigned char var_10 = (unsigned char)192;
int zero = 0;
long long int var_11 = 2450185102846695856LL;
unsigned int var_12 = 2931146381U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
