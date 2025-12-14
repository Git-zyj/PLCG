#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)4;
signed char var_3 = (signed char)4;
unsigned int var_5 = 676841271U;
unsigned short var_6 = (unsigned short)29572;
unsigned char var_11 = (unsigned char)86;
int zero = 0;
unsigned int var_13 = 1736342085U;
unsigned int var_14 = 103232544U;
unsigned int var_15 = 747620863U;
long long int var_16 = -4410334777794289685LL;
long long int var_17 = -6959437100286633108LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
