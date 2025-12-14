#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)11046;
int var_4 = -1289755822;
long long int var_7 = -2376795864110168311LL;
unsigned long long int var_13 = 6241531916343499308ULL;
long long int var_14 = -5097264513153219852LL;
int var_15 = 2095619713;
int zero = 0;
long long int var_17 = -3001844515272253297LL;
unsigned int var_18 = 577003611U;
short var_19 = (short)20535;
unsigned int var_20 = 4191166855U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
