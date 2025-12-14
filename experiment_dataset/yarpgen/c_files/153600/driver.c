#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)215;
long long int var_5 = -1394560066945740125LL;
unsigned int var_8 = 228514941U;
unsigned int var_12 = 471101337U;
unsigned int var_15 = 3818467798U;
short var_17 = (short)29266;
int zero = 0;
unsigned char var_18 = (unsigned char)0;
int var_19 = -598243269;
short var_20 = (short)-24460;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
