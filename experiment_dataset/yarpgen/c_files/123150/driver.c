#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)6;
signed char var_1 = (signed char)73;
int var_5 = 219523146;
unsigned short var_9 = (unsigned short)47016;
unsigned int var_10 = 857278153U;
signed char var_18 = (signed char)34;
int zero = 0;
signed char var_20 = (signed char)127;
int var_21 = -1042047710;
int var_22 = 86302045;
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
