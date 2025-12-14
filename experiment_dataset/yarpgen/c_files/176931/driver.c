#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2893032100326509597LL;
unsigned long long int var_2 = 17721950809835338296ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 7603022092196165257ULL;
int var_5 = -1756986036;
short var_6 = (short)9149;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)218;
int zero = 0;
unsigned long long int var_10 = 609589443249892520ULL;
int var_11 = 802786230;
unsigned long long int var_12 = 685472677574164291ULL;
int var_13 = 263139554;
short var_14 = (short)-29326;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
