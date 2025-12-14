#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-93;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)116;
_Bool var_14 = (_Bool)1;
int var_18 = 1801954821;
int zero = 0;
unsigned short var_20 = (unsigned short)58566;
unsigned int var_21 = 1970662127U;
int var_22 = -1191992878;
unsigned short var_23 = (unsigned short)43302;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
