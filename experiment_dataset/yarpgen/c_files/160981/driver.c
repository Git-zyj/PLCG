#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4581897710119324060LL;
short var_4 = (short)29024;
long long int var_5 = 664413044314983826LL;
short var_7 = (short)24413;
signed char var_8 = (signed char)-5;
unsigned int var_9 = 4080178093U;
short var_10 = (short)-29872;
int zero = 0;
long long int var_12 = -6393927674126342976LL;
unsigned char var_13 = (unsigned char)244;
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
