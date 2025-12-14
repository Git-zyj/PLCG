#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1370807065U;
unsigned short var_7 = (unsigned short)61656;
short var_8 = (short)21317;
unsigned int var_9 = 1519122463U;
long long int var_10 = -3517281871537123707LL;
short var_14 = (short)29025;
int zero = 0;
signed char var_15 = (signed char)111;
short var_16 = (short)-31262;
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
