#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42853;
unsigned short var_10 = (unsigned short)15084;
unsigned short var_11 = (unsigned short)10618;
int var_12 = 320351028;
short var_13 = (short)7192;
unsigned int var_15 = 1865836022U;
int zero = 0;
signed char var_16 = (signed char)46;
int var_17 = -989027337;
int var_18 = 108870932;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
