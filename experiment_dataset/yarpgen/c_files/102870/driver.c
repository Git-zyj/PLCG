#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 3612828185U;
int var_6 = -1745890579;
long long int var_8 = 4428515546585197955LL;
long long int var_9 = 2280024290139488396LL;
unsigned short var_11 = (unsigned short)24055;
unsigned int var_12 = 3289951094U;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)20;
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
