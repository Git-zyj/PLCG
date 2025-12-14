#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-105;
signed char var_6 = (signed char)120;
short var_10 = (short)18685;
unsigned short var_15 = (unsigned short)5379;
int zero = 0;
unsigned char var_17 = (unsigned char)115;
unsigned int var_18 = 420216504U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
