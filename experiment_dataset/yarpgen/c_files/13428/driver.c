#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-12961;
unsigned long long int var_6 = 12779432347701830838ULL;
unsigned short var_7 = (unsigned short)15477;
int zero = 0;
short var_10 = (short)-16519;
short var_11 = (short)-28945;
signed char var_12 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
