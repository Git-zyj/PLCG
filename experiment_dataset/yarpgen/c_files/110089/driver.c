#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-98;
unsigned long long int var_10 = 115507420442506183ULL;
unsigned short var_16 = (unsigned short)46540;
signed char var_18 = (signed char)18;
int zero = 0;
short var_20 = (short)-30049;
unsigned char var_21 = (unsigned char)72;
unsigned int var_22 = 3723519778U;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
