#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22873;
unsigned char var_3 = (unsigned char)148;
signed char var_6 = (signed char)38;
signed char var_7 = (signed char)-104;
int var_10 = -623612095;
int zero = 0;
signed char var_12 = (signed char)49;
unsigned char var_13 = (unsigned char)205;
signed char var_14 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
