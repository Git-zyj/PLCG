#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27841;
signed char var_2 = (signed char)83;
unsigned int var_7 = 3998583447U;
signed char var_11 = (signed char)42;
unsigned char var_15 = (unsigned char)155;
int zero = 0;
unsigned char var_17 = (unsigned char)20;
short var_18 = (short)-2891;
signed char var_19 = (signed char)68;
unsigned int var_20 = 3468394274U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
