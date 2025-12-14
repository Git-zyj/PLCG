#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -206425774;
short var_3 = (short)11324;
int var_4 = -345882097;
_Bool var_5 = (_Bool)1;
int var_7 = 127474894;
int zero = 0;
unsigned char var_12 = (unsigned char)54;
short var_13 = (short)23527;
unsigned int var_14 = 2752872499U;
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
