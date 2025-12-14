#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -792925847;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)109;
signed char var_4 = (signed char)70;
unsigned long long int var_6 = 8764632114891610018ULL;
signed char var_8 = (signed char)33;
int zero = 0;
int var_10 = -1209841106;
short var_11 = (short)15497;
unsigned char var_12 = (unsigned char)27;
unsigned char var_13 = (unsigned char)97;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
