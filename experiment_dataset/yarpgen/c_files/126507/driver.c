#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3912;
unsigned int var_1 = 3066571256U;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-25271;
int var_7 = -1374215496;
short var_9 = (short)-8878;
short var_10 = (short)-27844;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)31400;
unsigned char var_13 = (unsigned char)63;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
