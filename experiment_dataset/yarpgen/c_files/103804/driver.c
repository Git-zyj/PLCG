#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1662;
short var_2 = (short)-12460;
long long int var_3 = 8222500741635245182LL;
long long int var_4 = 4419285509331727000LL;
long long int var_5 = -8178456124686024746LL;
unsigned char var_9 = (unsigned char)136;
int zero = 0;
unsigned char var_11 = (unsigned char)234;
unsigned int var_12 = 1235803180U;
unsigned short var_13 = (unsigned short)59577;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
