#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 885750545U;
long long int var_7 = 2133057153870230921LL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_16 = 271016469838094303ULL;
int zero = 0;
unsigned long long int var_17 = 11346949601304039556ULL;
signed char var_18 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
