#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 4664272040481553478LL;
unsigned short var_12 = (unsigned short)13662;
int var_15 = 313574124;
signed char var_17 = (signed char)86;
unsigned char var_19 = (unsigned char)178;
int zero = 0;
signed char var_20 = (signed char)79;
unsigned short var_21 = (unsigned short)54116;
int var_22 = 1723894548;
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
