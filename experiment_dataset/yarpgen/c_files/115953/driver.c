#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)22399;
int var_6 = 1300433342;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3991267513U;
int var_12 = 902188120;
short var_17 = (short)-25685;
unsigned short var_19 = (unsigned short)48594;
int zero = 0;
signed char var_20 = (signed char)-9;
unsigned short var_21 = (unsigned short)5497;
signed char var_22 = (signed char)50;
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
