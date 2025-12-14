#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3346857381U;
signed char var_3 = (signed char)114;
short var_12 = (short)3868;
int zero = 0;
int var_15 = 610722644;
unsigned short var_16 = (unsigned short)5014;
unsigned long long int var_17 = 61583072302725754ULL;
unsigned long long int var_18 = 10475679726138125643ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
