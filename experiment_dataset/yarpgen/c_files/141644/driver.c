#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
unsigned int var_4 = 4065014447U;
unsigned char var_5 = (unsigned char)177;
unsigned char var_6 = (unsigned char)71;
unsigned short var_8 = (unsigned short)64263;
signed char var_10 = (signed char)-1;
short var_11 = (short)-22931;
int zero = 0;
unsigned short var_19 = (unsigned short)43867;
unsigned long long int var_20 = 546506559887417386ULL;
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
