#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22765;
unsigned int var_3 = 423434101U;
signed char var_8 = (signed char)-10;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 5796509282186579520ULL;
short var_14 = (short)-23404;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 1107621383331746542ULL;
unsigned int var_17 = 4145127252U;
short var_18 = (short)8584;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
