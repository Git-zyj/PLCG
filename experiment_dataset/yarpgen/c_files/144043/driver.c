#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)70;
unsigned long long int var_7 = 18142246030382641083ULL;
signed char var_9 = (signed char)82;
unsigned char var_15 = (unsigned char)78;
unsigned long long int var_16 = 9588109019035123453ULL;
signed char var_18 = (signed char)-95;
int zero = 0;
short var_19 = (short)-15902;
short var_20 = (short)-28097;
short var_21 = (short)31713;
signed char var_22 = (signed char)13;
short var_23 = (short)-26288;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
