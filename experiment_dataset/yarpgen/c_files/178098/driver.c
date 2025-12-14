#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)43261;
unsigned char var_5 = (unsigned char)152;
unsigned char var_7 = (unsigned char)103;
short var_9 = (short)24747;
int zero = 0;
long long int var_11 = -3444422419384442439LL;
unsigned short var_12 = (unsigned short)23174;
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
