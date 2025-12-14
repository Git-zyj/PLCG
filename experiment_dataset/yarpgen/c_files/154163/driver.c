#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63113;
unsigned char var_2 = (unsigned char)146;
unsigned short var_7 = (unsigned short)18931;
int zero = 0;
long long int var_11 = -6917669661655556522LL;
short var_12 = (short)-2650;
short var_13 = (short)-26617;
_Bool var_14 = (_Bool)0;
int var_15 = -2030371645;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
