#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3993;
_Bool var_3 = (_Bool)0;
int var_6 = 1160297003;
short var_7 = (short)-3246;
signed char var_9 = (signed char)112;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 13698863530778414587ULL;
unsigned int var_15 = 3992260786U;
unsigned char var_16 = (unsigned char)214;
unsigned char var_17 = (unsigned char)112;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
