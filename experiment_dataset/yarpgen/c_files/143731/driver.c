#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3903799616886249177ULL;
unsigned long long int var_6 = 10451164387759073994ULL;
long long int var_8 = 1153396673440241367LL;
unsigned char var_11 = (unsigned char)228;
unsigned int var_13 = 1728673335U;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -545514424222021199LL;
unsigned int var_18 = 2156532897U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
