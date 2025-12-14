#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)28611;
_Bool var_4 = (_Bool)0;
unsigned char var_14 = (unsigned char)109;
int zero = 0;
unsigned long long int var_20 = 11681846403433081412ULL;
unsigned long long int var_21 = 2438083924436252702ULL;
unsigned char var_22 = (unsigned char)178;
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
