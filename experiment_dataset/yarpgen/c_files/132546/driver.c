#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45233;
unsigned char var_5 = (unsigned char)199;
unsigned char var_7 = (unsigned char)35;
unsigned char var_8 = (unsigned char)167;
short var_9 = (short)-3039;
unsigned char var_10 = (unsigned char)42;
int zero = 0;
unsigned char var_13 = (unsigned char)11;
short var_14 = (short)-29467;
int var_15 = -78930075;
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
