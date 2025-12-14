#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 295972770002374766ULL;
unsigned char var_4 = (unsigned char)237;
short var_10 = (short)403;
signed char var_14 = (signed char)102;
int zero = 0;
short var_20 = (short)-21085;
signed char var_21 = (signed char)-41;
short var_22 = (short)7139;
unsigned short var_23 = (unsigned short)51019;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
