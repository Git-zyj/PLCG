#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3970306505U;
int var_4 = 173626052;
unsigned int var_7 = 1096081960U;
short var_12 = (short)22750;
unsigned short var_13 = (unsigned short)4808;
unsigned short var_14 = (unsigned short)8046;
int zero = 0;
unsigned short var_16 = (unsigned short)41822;
unsigned short var_17 = (unsigned short)57959;
unsigned int var_18 = 2619042460U;
signed char var_19 = (signed char)81;
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
