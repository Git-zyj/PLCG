#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -7493625243941346709LL;
unsigned short var_10 = (unsigned short)64306;
short var_14 = (short)2455;
unsigned char var_17 = (unsigned char)168;
int zero = 0;
unsigned short var_19 = (unsigned short)52072;
signed char var_20 = (signed char)-18;
signed char var_21 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
