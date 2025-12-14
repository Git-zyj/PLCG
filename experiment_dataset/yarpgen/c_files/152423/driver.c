#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-30;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-32;
_Bool var_10 = (_Bool)1;
unsigned int var_15 = 3902864542U;
signed char var_16 = (signed char)26;
int zero = 0;
unsigned char var_17 = (unsigned char)193;
signed char var_18 = (signed char)117;
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
