#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-487;
unsigned char var_1 = (unsigned char)200;
unsigned char var_7 = (unsigned char)220;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 6211858624561121491ULL;
short var_16 = (short)24295;
unsigned char var_17 = (unsigned char)189;
signed char var_18 = (signed char)83;
short var_19 = (short)9578;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
