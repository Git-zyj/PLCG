#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)239;
unsigned char var_7 = (unsigned char)20;
signed char var_9 = (signed char)3;
unsigned short var_12 = (unsigned short)49672;
_Bool var_15 = (_Bool)1;
unsigned long long int var_17 = 14948079889977118286ULL;
int zero = 0;
short var_18 = (short)-3292;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)30761;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
