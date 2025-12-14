#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1739243949;
long long int var_10 = 7953314942461458186LL;
signed char var_14 = (signed char)0;
int zero = 0;
unsigned long long int var_20 = 1516851765981423493ULL;
unsigned short var_21 = (unsigned short)27969;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 5663219085275784984ULL;
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
