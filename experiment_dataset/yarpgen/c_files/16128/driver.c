#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1625140826002610238LL;
unsigned long long int var_2 = 18019367875917724398ULL;
_Bool var_5 = (_Bool)0;
int var_6 = 1578447241;
unsigned short var_7 = (unsigned short)46174;
short var_10 = (short)3796;
int var_11 = 289913978;
int zero = 0;
unsigned int var_12 = 1979935442U;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-2858;
void init() {
}

void checksum() {
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
