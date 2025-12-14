#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
unsigned int var_2 = 2151757121U;
short var_3 = (short)19112;
signed char var_8 = (signed char)-111;
short var_9 = (short)12175;
signed char var_14 = (signed char)-62;
unsigned int var_15 = 711801564U;
int zero = 0;
unsigned long long int var_20 = 17948507233024483329ULL;
int var_21 = -1602052837;
signed char var_22 = (signed char)-95;
signed char var_23 = (signed char)57;
short var_24 = (short)13535;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
