#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19127;
short var_7 = (short)-19191;
short var_9 = (short)7435;
unsigned char var_10 = (unsigned char)191;
unsigned short var_13 = (unsigned short)12979;
short var_17 = (short)26977;
int zero = 0;
short var_19 = (short)5040;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
