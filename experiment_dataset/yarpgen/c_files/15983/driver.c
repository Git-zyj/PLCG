#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)5246;
short var_2 = (short)32383;
unsigned long long int var_6 = 6706838751410533132ULL;
short var_9 = (short)-15549;
unsigned char var_10 = (unsigned char)87;
int zero = 0;
short var_11 = (short)20856;
signed char var_12 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
