#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)3493;
unsigned short var_7 = (unsigned short)42256;
_Bool var_8 = (_Bool)0;
long long int var_9 = -4794392617797053996LL;
signed char var_15 = (signed char)8;
int zero = 0;
signed char var_17 = (signed char)30;
unsigned long long int var_18 = 4145747182571852193ULL;
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
