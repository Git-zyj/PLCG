#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1444005560;
short var_5 = (short)23214;
unsigned short var_6 = (unsigned short)23994;
int var_8 = 998801536;
unsigned short var_9 = (unsigned short)57029;
short var_10 = (short)14365;
int var_16 = 1752560609;
int zero = 0;
signed char var_19 = (signed char)117;
unsigned char var_20 = (unsigned char)23;
signed char var_21 = (signed char)42;
void init() {
}

void checksum() {
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
