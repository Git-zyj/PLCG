#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24768;
short var_1 = (short)6697;
unsigned char var_2 = (unsigned char)145;
unsigned long long int var_5 = 11348783329896675798ULL;
unsigned int var_6 = 275000373U;
_Bool var_7 = (_Bool)0;
unsigned short var_14 = (unsigned short)17485;
unsigned char var_16 = (unsigned char)221;
int zero = 0;
unsigned int var_17 = 2778504600U;
unsigned char var_18 = (unsigned char)39;
unsigned long long int var_19 = 12390191155804914281ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
