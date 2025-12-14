#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11543289319416185292ULL;
unsigned long long int var_6 = 4182734877616392020ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)15314;
unsigned short var_19 = (unsigned short)8083;
void init() {
}

void checksum() {
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
