#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)119;
unsigned short var_6 = (unsigned short)46742;
signed char var_8 = (signed char)-39;
int var_9 = -2009245849;
int zero = 0;
unsigned char var_10 = (unsigned char)37;
short var_11 = (short)-11814;
unsigned short var_12 = (unsigned short)59860;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
