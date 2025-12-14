#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5981694455622270027LL;
unsigned int var_4 = 3051681193U;
signed char var_10 = (signed char)-113;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-38;
unsigned int var_14 = 2399777144U;
int zero = 0;
unsigned char var_15 = (unsigned char)70;
unsigned char var_16 = (unsigned char)186;
unsigned int var_17 = 241295619U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
