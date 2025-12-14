#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3254731252822028385LL;
unsigned short var_3 = (unsigned short)19908;
unsigned int var_6 = 166512437U;
unsigned short var_7 = (unsigned short)58558;
unsigned char var_12 = (unsigned char)204;
int zero = 0;
short var_14 = (short)-20649;
long long int var_15 = -9005801908322051195LL;
void init() {
}

void checksum() {
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
