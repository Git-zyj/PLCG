#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1124742234;
signed char var_6 = (signed char)-37;
signed char var_11 = (signed char)117;
long long int var_12 = -5259691128219391650LL;
signed char var_13 = (signed char)-5;
unsigned int var_14 = 3680175106U;
int zero = 0;
unsigned int var_16 = 352178915U;
unsigned long long int var_17 = 5481483403599890515ULL;
unsigned long long int var_18 = 2618838110737162299ULL;
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
