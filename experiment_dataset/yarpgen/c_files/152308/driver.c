#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
long long int var_3 = -7237612914251610077LL;
short var_6 = (short)23260;
long long int var_18 = 251471356860483137LL;
int zero = 0;
unsigned char var_19 = (unsigned char)255;
unsigned short var_20 = (unsigned short)50748;
void init() {
}

void checksum() {
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
