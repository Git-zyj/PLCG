#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2704944718995939787LL;
unsigned short var_5 = (unsigned short)643;
signed char var_7 = (signed char)12;
int zero = 0;
long long int var_18 = -1535293395400610185LL;
unsigned long long int var_19 = 12860278247372286149ULL;
long long int var_20 = -4497943007523400084LL;
void init() {
}

void checksum() {
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
