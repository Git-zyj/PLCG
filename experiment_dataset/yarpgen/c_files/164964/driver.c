#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2049907372;
signed char var_1 = (signed char)-115;
short var_4 = (short)1079;
unsigned long long int var_9 = 1901488162678160352ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)62933;
unsigned long long int var_14 = 8447429728679845977ULL;
unsigned char var_15 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
