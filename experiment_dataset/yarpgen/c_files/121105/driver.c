#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)64;
int var_7 = -728124436;
short var_9 = (short)-1292;
int zero = 0;
unsigned int var_11 = 84032122U;
signed char var_12 = (signed char)-123;
unsigned short var_13 = (unsigned short)28024;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
