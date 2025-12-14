#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)24435;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 963957749U;
signed char var_11 = (signed char)-68;
int zero = 0;
long long int var_18 = 3216773945956970136LL;
unsigned char var_19 = (unsigned char)211;
void init() {
}

void checksum() {
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
