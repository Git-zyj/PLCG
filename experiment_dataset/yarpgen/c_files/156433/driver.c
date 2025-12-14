#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)17;
unsigned char var_2 = (unsigned char)165;
_Bool var_7 = (_Bool)1;
short var_9 = (short)13970;
unsigned int var_12 = 2520877326U;
int zero = 0;
long long int var_13 = -8934856715210251326LL;
short var_14 = (short)27901;
short var_15 = (short)23382;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
