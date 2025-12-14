#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
int var_6 = -24977594;
int var_7 = -101203568;
unsigned long long int var_12 = 16617406217361564665ULL;
int var_14 = -1948093964;
unsigned short var_15 = (unsigned short)44847;
int zero = 0;
unsigned long long int var_16 = 3993996664972782895ULL;
short var_17 = (short)9107;
unsigned int var_18 = 3746077104U;
void init() {
}

void checksum() {
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
