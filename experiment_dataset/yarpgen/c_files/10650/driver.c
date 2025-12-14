#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33578;
unsigned int var_2 = 2914648917U;
signed char var_8 = (signed char)72;
unsigned char var_13 = (unsigned char)216;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -980948082390879667LL;
short var_17 = (short)-7388;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
