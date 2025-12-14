#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
unsigned long long int var_2 = 10752675811632551105ULL;
unsigned long long int var_13 = 13824565985199213976ULL;
long long int var_15 = 2249130437880867782LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2852909472U;
short var_18 = (short)-724;
unsigned char var_19 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
