#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)120;
unsigned int var_5 = 2299002772U;
unsigned char var_6 = (unsigned char)94;
unsigned long long int var_9 = 10404810258540510937ULL;
int zero = 0;
signed char var_12 = (signed char)-67;
long long int var_13 = 4531922512065018326LL;
short var_14 = (short)-10166;
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
