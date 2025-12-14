#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)109;
signed char var_8 = (signed char)38;
unsigned short var_12 = (unsigned short)10236;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 1632316642U;
short var_20 = (short)23032;
short var_21 = (short)7019;
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
