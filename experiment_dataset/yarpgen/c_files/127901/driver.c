#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-5864;
unsigned char var_8 = (unsigned char)198;
unsigned short var_9 = (unsigned short)64970;
int zero = 0;
unsigned short var_10 = (unsigned short)10338;
signed char var_11 = (signed char)-33;
long long int var_12 = 7989517392504683538LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
