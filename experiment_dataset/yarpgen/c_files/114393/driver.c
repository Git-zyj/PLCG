#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-2277;
signed char var_3 = (signed char)-101;
unsigned long long int var_4 = 11641292124959076028ULL;
unsigned short var_5 = (unsigned short)39384;
int var_7 = 1492523459;
unsigned short var_8 = (unsigned short)30052;
int zero = 0;
short var_11 = (short)16761;
short var_12 = (short)-26362;
unsigned short var_13 = (unsigned short)20163;
unsigned char var_14 = (unsigned char)233;
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
