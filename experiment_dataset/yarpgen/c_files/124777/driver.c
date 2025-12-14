#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)81;
int var_9 = -1834862406;
unsigned char var_19 = (unsigned char)140;
int zero = 0;
unsigned long long int var_20 = 4716656604391284126ULL;
short var_21 = (short)-4824;
short var_22 = (short)28408;
unsigned char var_23 = (unsigned char)105;
unsigned int var_24 = 2356175587U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
