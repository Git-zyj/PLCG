#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12941;
short var_2 = (short)15869;
short var_7 = (short)-16066;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
long long int var_13 = -1561627389352304545LL;
unsigned int var_14 = 286483908U;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = 2085363011;
short var_19 = (short)740;
void init() {
}

void checksum() {
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
