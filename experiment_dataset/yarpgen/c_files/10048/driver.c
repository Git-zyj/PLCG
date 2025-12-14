#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -269878610660456120LL;
unsigned char var_3 = (unsigned char)165;
short var_6 = (short)-1510;
unsigned long long int var_7 = 5114957752590850083ULL;
unsigned char var_8 = (unsigned char)166;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-24365;
unsigned char var_19 = (unsigned char)183;
long long int var_20 = 1565632442774523365LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
