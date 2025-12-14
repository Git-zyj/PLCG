#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11569005414476395335ULL;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)84;
int var_7 = -334612518;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)96;
unsigned char var_11 = (unsigned char)100;
int zero = 0;
unsigned char var_14 = (unsigned char)195;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)61;
unsigned char var_17 = (unsigned char)124;
unsigned short var_18 = (unsigned short)10249;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
