#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26026;
unsigned long long int var_2 = 14623440658683743565ULL;
long long int var_5 = -6126913947259796700LL;
unsigned short var_6 = (unsigned short)61906;
int zero = 0;
long long int var_16 = -5344251144896970439LL;
int var_17 = -2027802566;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
