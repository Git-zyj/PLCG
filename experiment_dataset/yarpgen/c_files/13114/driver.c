#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 3517417610U;
unsigned long long int var_10 = 15115523096493745321ULL;
unsigned short var_14 = (unsigned short)41164;
int zero = 0;
unsigned long long int var_20 = 14771697902201608503ULL;
unsigned int var_21 = 4249083097U;
unsigned long long int var_22 = 9220233660329297008ULL;
signed char var_23 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
