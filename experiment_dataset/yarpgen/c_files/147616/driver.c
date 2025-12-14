#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58384;
unsigned short var_2 = (unsigned short)62283;
signed char var_3 = (signed char)20;
short var_4 = (short)8928;
_Bool var_7 = (_Bool)1;
short var_9 = (short)23199;
int zero = 0;
signed char var_18 = (signed char)-64;
unsigned char var_19 = (unsigned char)71;
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
