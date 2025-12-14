#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)19951;
unsigned char var_5 = (unsigned char)29;
signed char var_7 = (signed char)4;
unsigned long long int var_13 = 9010883377211786690ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -5811185520355391027LL;
unsigned short var_20 = (unsigned short)13353;
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
