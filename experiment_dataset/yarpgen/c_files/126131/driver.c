#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -876681258;
unsigned short var_11 = (unsigned short)27337;
unsigned long long int var_12 = 1495450303956435654ULL;
unsigned short var_13 = (unsigned short)19394;
signed char var_14 = (signed char)116;
int zero = 0;
unsigned char var_19 = (unsigned char)177;
unsigned char var_20 = (unsigned char)22;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
