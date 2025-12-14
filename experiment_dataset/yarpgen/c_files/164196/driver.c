#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)10;
int var_8 = 1567327291;
short var_9 = (short)-9521;
long long int var_10 = 3551567915777660780LL;
unsigned long long int var_14 = 18149029795648107516ULL;
long long int var_18 = -1966438173350453165LL;
int zero = 0;
unsigned int var_19 = 2972829719U;
unsigned int var_20 = 3785992703U;
_Bool var_21 = (_Bool)0;
short var_22 = (short)8662;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
