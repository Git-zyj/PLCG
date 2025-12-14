#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1463006731520246188LL;
unsigned int var_6 = 3051998458U;
signed char var_11 = (signed char)-48;
int zero = 0;
unsigned int var_14 = 3810959606U;
short var_15 = (short)27500;
signed char var_16 = (signed char)-82;
int var_17 = -1163746953;
short var_18 = (short)6182;
short var_19 = (short)14007;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
