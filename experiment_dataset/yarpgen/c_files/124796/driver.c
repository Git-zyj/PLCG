#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7353588435563326165LL;
unsigned long long int var_2 = 3037538663912494471ULL;
unsigned int var_4 = 2283895602U;
unsigned short var_7 = (unsigned short)61794;
short var_9 = (short)13434;
unsigned int var_10 = 1245433392U;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)-32458;
unsigned int var_13 = 3555661664U;
signed char var_14 = (signed char)-94;
unsigned int var_15 = 2166313686U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
