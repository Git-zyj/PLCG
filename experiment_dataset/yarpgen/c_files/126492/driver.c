#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-32;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)16;
short var_7 = (short)-3067;
int var_10 = -105466960;
int var_11 = -178675291;
int zero = 0;
unsigned short var_12 = (unsigned short)51383;
int var_13 = 1511902377;
void init() {
}

void checksum() {
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
