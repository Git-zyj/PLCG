#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)335;
unsigned long long int var_8 = 14400038783074369564ULL;
_Bool var_11 = (_Bool)0;
int var_12 = 837974220;
int var_14 = -583717972;
int var_18 = -1279875466;
int zero = 0;
int var_19 = 353270452;
unsigned short var_20 = (unsigned short)59957;
void init() {
}

void checksum() {
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
