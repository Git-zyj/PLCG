#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5553;
unsigned short var_2 = (unsigned short)11607;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)50086;
unsigned char var_5 = (unsigned char)222;
unsigned int var_8 = 2581121623U;
unsigned short var_9 = (unsigned short)43213;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1420932271U;
unsigned char var_12 = (unsigned char)171;
int zero = 0;
long long int var_13 = -9103260791490086060LL;
long long int var_14 = -6256699336511716787LL;
unsigned char var_15 = (unsigned char)152;
unsigned long long int var_16 = 3617815191976886725ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
