#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
unsigned short var_5 = (unsigned short)44699;
unsigned short var_6 = (unsigned short)10222;
short var_8 = (short)-28684;
short var_9 = (short)-2394;
unsigned int var_11 = 3928610382U;
signed char var_12 = (signed char)1;
int zero = 0;
signed char var_13 = (signed char)66;
unsigned char var_14 = (unsigned char)64;
unsigned short var_15 = (unsigned short)13826;
void init() {
}

void checksum() {
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
