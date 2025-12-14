#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1547721619384235598ULL;
unsigned short var_1 = (unsigned short)23715;
short var_7 = (short)19641;
long long int var_8 = 3705472261468873773LL;
unsigned long long int var_10 = 16629423745386969212ULL;
int zero = 0;
signed char var_11 = (signed char)99;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
