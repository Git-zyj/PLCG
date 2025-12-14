#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14307;
unsigned char var_2 = (unsigned char)39;
short var_4 = (short)-15811;
long long int var_6 = 4789011881942716051LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)56972;
long long int var_11 = 8438518295052728106LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
