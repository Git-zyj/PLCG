#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4995569192260572312LL;
int var_2 = 1391366792;
short var_4 = (short)-10681;
unsigned short var_5 = (unsigned short)56288;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 8655511413746585608ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -5435214227006716579LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 4574517921950819453ULL;
signed char var_15 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
