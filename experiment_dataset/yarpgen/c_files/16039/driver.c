#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5965419679124920026LL;
int var_2 = 1801768707;
signed char var_4 = (signed char)81;
short var_5 = (short)-28447;
signed char var_8 = (signed char)-45;
unsigned int var_11 = 3112407010U;
unsigned char var_12 = (unsigned char)198;
int zero = 0;
signed char var_15 = (signed char)118;
int var_16 = -10558;
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
