#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
unsigned char var_3 = (unsigned char)68;
signed char var_4 = (signed char)58;
unsigned char var_9 = (unsigned char)30;
unsigned int var_14 = 1090681566U;
int zero = 0;
int var_16 = 921674437;
signed char var_17 = (signed char)-22;
signed char var_18 = (signed char)-68;
long long int var_19 = 5146632029552503713LL;
void init() {
}

void checksum() {
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
