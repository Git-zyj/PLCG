#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
unsigned short var_1 = (unsigned short)11447;
unsigned long long int var_3 = 14500294651738445688ULL;
unsigned short var_4 = (unsigned short)30507;
signed char var_7 = (signed char)6;
int var_8 = -1272814444;
short var_10 = (short)6928;
unsigned long long int var_13 = 8548075418571770442ULL;
int zero = 0;
signed char var_17 = (signed char)81;
unsigned int var_18 = 109636752U;
void init() {
}

void checksum() {
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
