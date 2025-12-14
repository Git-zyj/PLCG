#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2137875417;
long long int var_3 = -6346927120417703162LL;
signed char var_5 = (signed char)82;
long long int var_6 = 2530201474037789619LL;
short var_9 = (short)16709;
unsigned short var_13 = (unsigned short)44377;
int zero = 0;
unsigned short var_15 = (unsigned short)15761;
unsigned char var_16 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
