#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3742517195310407311LL;
short var_1 = (short)-15517;
_Bool var_2 = (_Bool)0;
short var_3 = (short)14207;
unsigned short var_6 = (unsigned short)47146;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)146;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)15036;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
