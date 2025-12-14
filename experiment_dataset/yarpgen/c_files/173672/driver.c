#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20518;
unsigned short var_1 = (unsigned short)50517;
unsigned short var_2 = (unsigned short)28002;
unsigned char var_4 = (unsigned char)142;
short var_6 = (short)-24485;
int var_7 = 488771440;
int var_8 = 1285988501;
unsigned int var_9 = 2249702128U;
short var_10 = (short)-32641;
unsigned short var_12 = (unsigned short)53356;
int zero = 0;
unsigned short var_14 = (unsigned short)59047;
short var_15 = (short)-29529;
short var_16 = (short)-20002;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
