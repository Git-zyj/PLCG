#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3586;
unsigned char var_1 = (unsigned char)207;
unsigned int var_7 = 2096515704U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1967553105U;
int zero = 0;
unsigned char var_12 = (unsigned char)228;
short var_13 = (short)10820;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
