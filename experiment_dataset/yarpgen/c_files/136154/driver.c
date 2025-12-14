#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)67;
unsigned long long int var_6 = 10293469535781746987ULL;
unsigned long long int var_7 = 11485285506072465875ULL;
_Bool var_10 = (_Bool)1;
int var_16 = 1875303246;
short var_18 = (short)-14166;
int zero = 0;
unsigned short var_19 = (unsigned short)50003;
unsigned char var_20 = (unsigned char)87;
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
