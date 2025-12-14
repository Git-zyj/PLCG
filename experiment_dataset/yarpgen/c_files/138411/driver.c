#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
unsigned int var_2 = 2498646102U;
long long int var_8 = -9073612021120782297LL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_13 = 7099975757225862980ULL;
signed char var_17 = (signed char)-33;
int zero = 0;
unsigned short var_18 = (unsigned short)65422;
int var_19 = 552221011;
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
