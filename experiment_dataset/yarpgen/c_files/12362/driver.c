#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4989879189366805865LL;
signed char var_1 = (signed char)73;
long long int var_3 = -6777928863366891370LL;
unsigned short var_5 = (unsigned short)53743;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 3303822502776455102ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 41898585U;
signed char var_15 = (signed char)114;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
