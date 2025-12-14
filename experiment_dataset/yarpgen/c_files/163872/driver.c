#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)96;
unsigned char var_5 = (unsigned char)57;
_Bool var_8 = (_Bool)1;
unsigned char var_15 = (unsigned char)12;
int zero = 0;
short var_16 = (short)-31562;
int var_17 = 220134155;
unsigned short var_18 = (unsigned short)38042;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
