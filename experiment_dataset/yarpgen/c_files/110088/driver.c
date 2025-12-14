#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17071;
unsigned int var_2 = 4233976333U;
short var_4 = (short)-20570;
long long int var_5 = 8841079484623318805LL;
unsigned int var_8 = 1835259014U;
unsigned int var_12 = 2107735821U;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -4393234771836298491LL;
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
