#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10460;
unsigned long long int var_8 = 15736028079932356846ULL;
unsigned int var_13 = 1951883089U;
_Bool var_14 = (_Bool)0;
short var_15 = (short)1641;
int zero = 0;
signed char var_18 = (signed char)102;
signed char var_19 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
