#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)85;
unsigned char var_6 = (unsigned char)116;
unsigned char var_9 = (unsigned char)163;
short var_10 = (short)-8215;
int zero = 0;
int var_14 = -635992286;
signed char var_15 = (signed char)26;
int var_16 = 928549949;
int var_17 = 1530539356;
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
