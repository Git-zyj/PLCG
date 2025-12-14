#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 44313483433996842ULL;
unsigned long long int var_2 = 13610550722144576590ULL;
unsigned long long int var_3 = 5559056560837375772ULL;
signed char var_6 = (signed char)-2;
signed char var_7 = (signed char)64;
unsigned long long int var_8 = 16053415908880768754ULL;
unsigned int var_9 = 1032509065U;
int var_12 = -843376022;
unsigned short var_13 = (unsigned short)48265;
unsigned long long int var_14 = 5632593274513539242ULL;
unsigned char var_15 = (unsigned char)70;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
