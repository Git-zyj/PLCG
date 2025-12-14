#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-25047;
short var_5 = (short)14821;
unsigned short var_10 = (unsigned short)63074;
signed char var_15 = (signed char)-56;
int var_18 = 918140510;
int zero = 0;
long long int var_19 = 5655334090270075738LL;
unsigned long long int var_20 = 2897944429534242ULL;
void init() {
}

void checksum() {
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
