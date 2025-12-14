#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2052539781;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)41221;
unsigned long long int var_7 = 16861341599741027036ULL;
int zero = 0;
short var_10 = (short)8535;
unsigned short var_11 = (unsigned short)44667;
unsigned long long int var_12 = 6541780007603755268ULL;
unsigned short var_13 = (unsigned short)12167;
signed char var_14 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
