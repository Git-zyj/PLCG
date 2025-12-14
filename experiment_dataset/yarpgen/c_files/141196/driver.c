#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30295;
unsigned char var_5 = (unsigned char)235;
short var_13 = (short)-10075;
signed char var_16 = (signed char)63;
unsigned int var_17 = 155341913U;
int var_19 = 568466594;
int zero = 0;
unsigned long long int var_20 = 11646074793473111918ULL;
unsigned char var_21 = (unsigned char)127;
short var_22 = (short)13098;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
