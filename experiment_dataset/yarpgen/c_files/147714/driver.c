#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)23;
signed char var_3 = (signed char)91;
_Bool var_6 = (_Bool)1;
short var_7 = (short)3646;
unsigned short var_9 = (unsigned short)12015;
int zero = 0;
short var_10 = (short)23088;
signed char var_11 = (signed char)34;
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
