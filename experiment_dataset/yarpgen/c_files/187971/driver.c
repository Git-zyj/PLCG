#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_8 = 567069002;
short var_10 = (short)-19402;
unsigned long long int var_13 = 2839559933713124823ULL;
unsigned int var_15 = 4116594943U;
int zero = 0;
signed char var_18 = (signed char)112;
unsigned int var_19 = 3353683395U;
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
