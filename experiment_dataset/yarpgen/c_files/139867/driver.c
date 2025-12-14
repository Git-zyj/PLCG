#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1989580305;
short var_4 = (short)13741;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)71;
unsigned char var_9 = (unsigned char)49;
int zero = 0;
short var_10 = (short)30470;
short var_11 = (short)30235;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
