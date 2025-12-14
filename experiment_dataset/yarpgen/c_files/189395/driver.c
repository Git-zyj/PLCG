#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 288634399U;
unsigned char var_5 = (unsigned char)154;
unsigned int var_7 = 3414351524U;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 2329729998292350871ULL;
int var_12 = 1101022602;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
