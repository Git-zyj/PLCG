#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12060111078892466693ULL;
int var_3 = -1916880624;
unsigned long long int var_5 = 3980426196994781244ULL;
int var_6 = -1083426968;
int zero = 0;
unsigned int var_11 = 1789137517U;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)93;
unsigned int var_14 = 2262995444U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
