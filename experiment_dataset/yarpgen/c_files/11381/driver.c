#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12599512628032567504ULL;
int var_7 = -1807948156;
unsigned int var_11 = 2094109480U;
unsigned char var_12 = (unsigned char)117;
unsigned int var_14 = 4287910066U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3533777828U;
short var_20 = (short)-12329;
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
