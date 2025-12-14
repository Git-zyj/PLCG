#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)9;
unsigned long long int var_10 = 969157090496862462ULL;
unsigned short var_12 = (unsigned short)37934;
int zero = 0;
int var_18 = 1193786365;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-32;
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
