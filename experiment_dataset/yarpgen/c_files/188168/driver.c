#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)95;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)35279;
short var_9 = (short)15079;
int zero = 0;
unsigned char var_10 = (unsigned char)35;
unsigned char var_11 = (unsigned char)230;
short var_12 = (short)3060;
unsigned short var_13 = (unsigned short)40826;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
