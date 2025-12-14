#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
short var_3 = (short)12214;
int var_10 = -1000817318;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)237;
int zero = 0;
int var_16 = -968113699;
unsigned char var_17 = (unsigned char)152;
signed char var_18 = (signed char)-34;
void init() {
}

void checksum() {
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
