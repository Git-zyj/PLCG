#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
unsigned char var_1 = (unsigned char)100;
unsigned char var_2 = (unsigned char)3;
unsigned long long int var_5 = 5428507938488384989ULL;
short var_7 = (short)-26446;
short var_8 = (short)-1;
unsigned int var_10 = 3157768217U;
int zero = 0;
unsigned int var_11 = 1565133539U;
short var_12 = (short)-31703;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
