#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
int var_2 = 342505433;
int var_7 = 351865854;
unsigned short var_11 = (unsigned short)51903;
short var_17 = (short)23618;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1191429124U;
short var_21 = (short)2512;
short var_22 = (short)15267;
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
