#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)221;
short var_4 = (short)6382;
short var_7 = (short)4484;
unsigned long long int var_10 = 4388431994771699639ULL;
short var_12 = (short)20519;
int zero = 0;
short var_15 = (short)31385;
signed char var_16 = (signed char)-16;
unsigned long long int var_17 = 3347537172686986127ULL;
unsigned int var_18 = 2486925391U;
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
