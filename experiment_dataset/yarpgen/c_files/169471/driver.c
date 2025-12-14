#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)149;
unsigned int var_9 = 3594980685U;
short var_11 = (short)-25326;
int zero = 0;
long long int var_12 = 7310826874140213420LL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)111;
unsigned int var_15 = 2746019602U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
