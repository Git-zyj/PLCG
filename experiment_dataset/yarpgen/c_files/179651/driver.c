#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 6877649910584700321ULL;
unsigned char var_3 = (unsigned char)17;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-8878;
int zero = 0;
unsigned long long int var_11 = 14258603590054906270ULL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-8126;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
