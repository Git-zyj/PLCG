#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)132;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 16811910824819133543ULL;
unsigned char var_10 = (unsigned char)137;
unsigned short var_11 = (unsigned short)13894;
int zero = 0;
unsigned int var_12 = 1054941386U;
long long int var_13 = -1123213858824465746LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
