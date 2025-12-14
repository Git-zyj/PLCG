#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2466;
_Bool var_1 = (_Bool)0;
short var_2 = (short)17926;
short var_5 = (short)-23865;
int zero = 0;
unsigned char var_11 = (unsigned char)62;
unsigned long long int var_12 = 14240983285232049994ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
