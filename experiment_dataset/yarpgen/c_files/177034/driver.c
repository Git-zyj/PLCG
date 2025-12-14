#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18535;
unsigned int var_1 = 3606568602U;
short var_5 = (short)26096;
unsigned int var_6 = 2362538528U;
unsigned long long int var_7 = 12747319085848846275ULL;
unsigned int var_9 = 2636494072U;
int zero = 0;
unsigned short var_12 = (unsigned short)60938;
unsigned short var_13 = (unsigned short)33761;
signed char var_14 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
