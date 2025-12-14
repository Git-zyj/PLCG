#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)39467;
short var_6 = (short)17480;
signed char var_8 = (signed char)92;
int zero = 0;
signed char var_18 = (signed char)-4;
signed char var_19 = (signed char)1;
unsigned char var_20 = (unsigned char)161;
int var_21 = -1842454299;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
