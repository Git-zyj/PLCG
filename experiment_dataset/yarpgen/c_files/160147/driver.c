#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59860;
short var_2 = (short)-150;
unsigned char var_7 = (unsigned char)57;
unsigned char var_8 = (unsigned char)56;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = -2108784445764495681LL;
signed char var_13 = (signed char)110;
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
