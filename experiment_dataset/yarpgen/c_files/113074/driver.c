#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64277;
signed char var_2 = (signed char)39;
unsigned long long int var_6 = 8601248321854629836ULL;
short var_8 = (short)-24011;
signed char var_12 = (signed char)-119;
int zero = 0;
short var_15 = (short)2957;
short var_16 = (short)17193;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
