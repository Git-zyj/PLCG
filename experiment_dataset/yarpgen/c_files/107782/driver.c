#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-14453;
unsigned int var_5 = 3185406460U;
signed char var_8 = (signed char)-29;
short var_12 = (short)-15420;
int zero = 0;
short var_16 = (short)-24155;
signed char var_17 = (signed char)25;
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
