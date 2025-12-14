#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1905609144942017843LL;
short var_3 = (short)-1921;
unsigned long long int var_4 = 8216223450863909966ULL;
short var_5 = (short)-1304;
unsigned char var_8 = (unsigned char)255;
unsigned short var_13 = (unsigned short)37948;
int zero = 0;
short var_20 = (short)9410;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
