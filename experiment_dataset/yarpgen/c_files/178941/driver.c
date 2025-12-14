#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5022963976049177821LL;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-66;
int zero = 0;
unsigned char var_20 = (unsigned char)126;
unsigned int var_21 = 735660060U;
short var_22 = (short)24292;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
