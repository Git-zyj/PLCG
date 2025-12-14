#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9578;
unsigned short var_5 = (unsigned short)40823;
int var_11 = 539923927;
unsigned char var_12 = (unsigned char)201;
int zero = 0;
long long int var_14 = -1850045522567518958LL;
unsigned char var_15 = (unsigned char)187;
unsigned int var_16 = 2961924821U;
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
