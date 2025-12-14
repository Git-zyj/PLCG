#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48473;
unsigned short var_6 = (unsigned short)42001;
signed char var_8 = (signed char)-109;
short var_18 = (short)-4109;
unsigned short var_19 = (unsigned short)21585;
int zero = 0;
unsigned char var_20 = (unsigned char)1;
unsigned short var_21 = (unsigned short)26219;
int var_22 = 1072992763;
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
