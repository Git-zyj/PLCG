#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2999;
short var_4 = (short)504;
int var_7 = -1215068574;
_Bool var_10 = (_Bool)1;
unsigned long long int var_13 = 6587484262139436616ULL;
int var_16 = 1484912074;
unsigned long long int var_17 = 6369189014391207461ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 2084965098;
signed char var_20 = (signed char)4;
unsigned char var_21 = (unsigned char)118;
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
