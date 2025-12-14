#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2679261195841890070LL;
unsigned char var_5 = (unsigned char)154;
_Bool var_6 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-11182;
short var_22 = (short)25120;
unsigned short var_23 = (unsigned short)13029;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
