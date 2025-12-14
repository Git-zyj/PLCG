#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13112;
unsigned short var_2 = (unsigned short)3824;
short var_3 = (short)6306;
short var_5 = (short)-31759;
signed char var_6 = (signed char)-109;
unsigned int var_8 = 2833807823U;
int zero = 0;
unsigned int var_10 = 2053243871U;
unsigned short var_11 = (unsigned short)7476;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
