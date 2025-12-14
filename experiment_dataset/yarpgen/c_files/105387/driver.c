#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
unsigned int var_4 = 2474391782U;
_Bool var_5 = (_Bool)1;
long long int var_6 = -227303388866846420LL;
long long int var_7 = -7353833945681886143LL;
unsigned char var_12 = (unsigned char)204;
unsigned short var_15 = (unsigned short)40932;
unsigned char var_17 = (unsigned char)241;
int zero = 0;
unsigned int var_18 = 419452176U;
int var_19 = -1799195033;
short var_20 = (short)24596;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
