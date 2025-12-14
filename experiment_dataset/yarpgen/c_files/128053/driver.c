#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13884;
unsigned int var_5 = 3399127511U;
unsigned long long int var_6 = 12667993668120830603ULL;
signed char var_8 = (signed char)-119;
int var_9 = -268398182;
int zero = 0;
unsigned char var_10 = (unsigned char)18;
short var_11 = (short)-28148;
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
