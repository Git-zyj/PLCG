#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)148;
unsigned short var_9 = (unsigned short)54951;
unsigned int var_13 = 3768402363U;
unsigned short var_16 = (unsigned short)61512;
int zero = 0;
short var_19 = (short)12763;
unsigned short var_20 = (unsigned short)13681;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
