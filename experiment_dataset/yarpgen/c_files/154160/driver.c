#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_9 = (short)5924;
unsigned char var_10 = (unsigned char)255;
int var_11 = 117230292;
long long int var_13 = 8305966588205129669LL;
int zero = 0;
short var_17 = (short)3563;
signed char var_18 = (signed char)-15;
void init() {
}

void checksum() {
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
