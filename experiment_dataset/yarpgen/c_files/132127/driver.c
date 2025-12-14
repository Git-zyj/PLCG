#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27105;
unsigned int var_3 = 3001289942U;
short var_4 = (short)-18881;
unsigned int var_7 = 945132075U;
unsigned char var_8 = (unsigned char)73;
int zero = 0;
int var_11 = 718673634;
int var_12 = -1344318834;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 6164206002285834137ULL;
void init() {
}

void checksum() {
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
