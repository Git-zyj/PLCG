#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)117;
unsigned short var_5 = (unsigned short)49137;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)37;
short var_10 = (short)13553;
int zero = 0;
short var_11 = (short)6828;
short var_12 = (short)30210;
void init() {
}

void checksum() {
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
