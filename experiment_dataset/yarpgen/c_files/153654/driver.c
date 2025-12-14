#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)171;
unsigned short var_7 = (unsigned short)43965;
long long int var_8 = -6529154024975342223LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-38;
long long int var_13 = 7570762146120682059LL;
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
