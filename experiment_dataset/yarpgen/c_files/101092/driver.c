#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1276346776;
unsigned int var_6 = 843917888U;
unsigned int var_7 = 4033496650U;
int zero = 0;
unsigned int var_12 = 3318194766U;
short var_13 = (short)-3078;
unsigned int var_14 = 3766026897U;
unsigned char var_15 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
