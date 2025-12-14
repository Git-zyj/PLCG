#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12411533790586674558ULL;
int var_2 = 99868470;
long long int var_5 = -4763981492657774825LL;
long long int var_6 = 2708513870627763972LL;
int var_7 = -374385178;
long long int var_8 = -2626674431279686623LL;
unsigned short var_10 = (unsigned short)10512;
unsigned long long int var_12 = 16179172500245044136ULL;
signed char var_17 = (signed char)30;
int zero = 0;
unsigned int var_19 = 3412012682U;
unsigned int var_20 = 2515638395U;
unsigned long long int var_21 = 15076567168763013263ULL;
signed char var_22 = (signed char)-126;
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
