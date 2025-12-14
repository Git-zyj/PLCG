#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
signed char var_2 = (signed char)46;
_Bool var_3 = (_Bool)1;
short var_6 = (short)7739;
short var_11 = (short)21432;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -346357494515326925LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
