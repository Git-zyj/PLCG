#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12249251271464539829ULL;
int var_2 = -2011042892;
unsigned long long int var_3 = 17909178657035637375ULL;
_Bool var_7 = (_Bool)0;
signed char var_13 = (signed char)110;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 5650790597408576216LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
