#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)50;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)71;
short var_10 = (short)-2499;
short var_11 = (short)26838;
int zero = 0;
unsigned int var_12 = 1884924771U;
int var_13 = -370317573;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
