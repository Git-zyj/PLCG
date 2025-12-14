#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)38;
unsigned short var_5 = (unsigned short)28107;
int zero = 0;
unsigned char var_10 = (unsigned char)236;
unsigned char var_11 = (unsigned char)141;
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
