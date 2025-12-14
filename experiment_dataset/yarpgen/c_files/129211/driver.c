#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_8 = -2075859411;
unsigned long long int var_9 = 133362118650525657ULL;
int var_13 = -449528919;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)123;
unsigned char var_19 = (unsigned char)46;
signed char var_20 = (signed char)65;
short var_21 = (short)11220;
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
