#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11611;
unsigned short var_4 = (unsigned short)43154;
unsigned long long int var_5 = 6586149449922301494ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)75;
unsigned char var_12 = (unsigned char)145;
unsigned short var_13 = (unsigned short)55155;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
