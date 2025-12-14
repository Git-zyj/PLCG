#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)21898;
unsigned char var_5 = (unsigned char)174;
unsigned short var_7 = (unsigned short)169;
signed char var_11 = (signed char)80;
unsigned short var_13 = (unsigned short)11807;
int zero = 0;
unsigned int var_14 = 4018971384U;
short var_15 = (short)7870;
unsigned int var_16 = 217040173U;
int var_17 = 221754762;
void init() {
}

void checksum() {
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
