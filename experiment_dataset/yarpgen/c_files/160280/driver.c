#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-94;
int var_6 = -46843113;
_Bool var_7 = (_Bool)1;
unsigned char var_12 = (unsigned char)184;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 3722503216253971710LL;
long long int var_16 = 3088811352103991111LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
