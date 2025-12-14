#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26566;
signed char var_1 = (signed char)24;
signed char var_3 = (signed char)-116;
signed char var_4 = (signed char)-11;
unsigned int var_8 = 1379004265U;
unsigned long long int var_10 = 7392219575456017753ULL;
signed char var_11 = (signed char)-85;
int zero = 0;
signed char var_12 = (signed char)-15;
unsigned short var_13 = (unsigned short)27747;
unsigned long long int var_14 = 360596085793602962ULL;
int var_15 = 1013745613;
unsigned int var_16 = 1459766770U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
