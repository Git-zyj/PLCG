#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16692978584286202359ULL;
unsigned int var_5 = 2973600155U;
short var_7 = (short)25589;
unsigned int var_8 = 1803002547U;
_Bool var_9 = (_Bool)1;
int var_11 = 800320022;
int zero = 0;
long long int var_14 = 7295674501719519792LL;
unsigned char var_15 = (unsigned char)144;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
