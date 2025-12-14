#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-47;
signed char var_7 = (signed char)99;
unsigned short var_13 = (unsigned short)36298;
signed char var_14 = (signed char)18;
int zero = 0;
unsigned short var_16 = (unsigned short)52514;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)16248;
signed char var_19 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
