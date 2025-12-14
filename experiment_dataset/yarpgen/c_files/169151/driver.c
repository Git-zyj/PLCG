#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)17776;
unsigned long long int var_9 = 15688437966541080846ULL;
unsigned int var_10 = 376586352U;
unsigned short var_12 = (unsigned short)5185;
int zero = 0;
signed char var_16 = (signed char)60;
signed char var_17 = (signed char)-29;
unsigned int var_18 = 3279598287U;
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
