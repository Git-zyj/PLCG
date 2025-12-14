#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
int var_2 = -226290194;
unsigned long long int var_4 = 12078497793203288529ULL;
int var_5 = -1212421697;
unsigned char var_7 = (unsigned char)42;
long long int var_8 = 31757939736595306LL;
long long int var_10 = 2670449593756006271LL;
long long int var_15 = 177461434028695851LL;
int var_17 = -296625814;
int var_19 = 794939031;
int zero = 0;
unsigned long long int var_20 = 11241721509442859081ULL;
short var_21 = (short)-24085;
long long int var_22 = 1827258381048297958LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
