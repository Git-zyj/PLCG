#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5156;
unsigned char var_4 = (unsigned char)203;
short var_9 = (short)-18413;
short var_12 = (short)-6886;
signed char var_16 = (signed char)-75;
int zero = 0;
signed char var_18 = (signed char)-80;
signed char var_19 = (signed char)-70;
short var_20 = (short)15646;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
