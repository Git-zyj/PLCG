#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)149;
int var_3 = -1783259393;
short var_7 = (short)-28320;
unsigned int var_9 = 2471083928U;
unsigned int var_11 = 3599896964U;
unsigned char var_13 = (unsigned char)130;
unsigned int var_17 = 2045784923U;
int zero = 0;
unsigned int var_19 = 202772325U;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
