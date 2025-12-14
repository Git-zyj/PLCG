#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-22;
unsigned int var_1 = 371929995U;
int var_3 = 895212752;
int var_7 = -2132240607;
unsigned char var_8 = (unsigned char)47;
short var_9 = (short)645;
unsigned int var_11 = 4045696353U;
int zero = 0;
short var_16 = (short)-20872;
unsigned short var_17 = (unsigned short)53948;
void init() {
}

void checksum() {
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
