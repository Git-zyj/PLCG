#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 4239973709U;
short var_5 = (short)-11391;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)7200;
unsigned short var_8 = (unsigned short)52293;
int zero = 0;
short var_10 = (short)11834;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
