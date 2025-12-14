#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)8;
unsigned long long int var_5 = 12193052118120337271ULL;
unsigned char var_6 = (unsigned char)142;
unsigned char var_8 = (unsigned char)228;
unsigned long long int var_12 = 8451299916960817446ULL;
unsigned char var_15 = (unsigned char)193;
int zero = 0;
unsigned char var_16 = (unsigned char)61;
unsigned long long int var_17 = 6979006803357805066ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
