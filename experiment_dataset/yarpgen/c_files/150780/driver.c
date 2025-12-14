#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3936422186U;
unsigned long long int var_7 = 4010039254525908802ULL;
unsigned short var_8 = (unsigned short)4668;
unsigned long long int var_10 = 14112706748297213363ULL;
short var_12 = (short)-14711;
unsigned short var_13 = (unsigned short)9745;
short var_16 = (short)-2979;
int zero = 0;
int var_18 = -874467644;
signed char var_19 = (signed char)-23;
signed char var_20 = (signed char)38;
unsigned int var_21 = 3120864311U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
