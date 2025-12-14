#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
int var_3 = 708959397;
unsigned char var_5 = (unsigned char)122;
signed char var_7 = (signed char)19;
signed char var_10 = (signed char)-102;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)27245;
_Bool var_13 = (_Bool)1;
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
