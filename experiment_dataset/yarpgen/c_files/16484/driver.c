#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44134;
_Bool var_4 = (_Bool)1;
short var_6 = (short)1433;
unsigned long long int var_8 = 4802053882948542044ULL;
unsigned short var_11 = (unsigned short)60443;
int zero = 0;
unsigned long long int var_12 = 1199040711185938373ULL;
short var_13 = (short)-12425;
signed char var_14 = (signed char)-53;
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
