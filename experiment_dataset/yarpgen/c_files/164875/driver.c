#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2488233207862265374LL;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-72;
unsigned int var_5 = 4151956328U;
int zero = 0;
unsigned int var_12 = 4157273506U;
long long int var_13 = -2556638140853727696LL;
short var_14 = (short)3025;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
