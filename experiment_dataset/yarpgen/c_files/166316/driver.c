#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-11597;
short var_3 = (short)1258;
long long int var_8 = -1500851606033005973LL;
unsigned long long int var_12 = 3351347542172345966ULL;
int var_16 = -1939059523;
int zero = 0;
unsigned char var_20 = (unsigned char)177;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 3431896690026182199ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
