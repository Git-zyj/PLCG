#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1182412878313613405ULL;
signed char var_1 = (signed char)105;
long long int var_2 = -7662866582036016182LL;
unsigned short var_4 = (unsigned short)1983;
int var_5 = 119283767;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)134;
short var_11 = (short)28272;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
