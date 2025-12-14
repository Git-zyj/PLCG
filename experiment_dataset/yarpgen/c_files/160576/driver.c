#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1629202161;
_Bool var_5 = (_Bool)0;
long long int var_8 = -3560141173767189807LL;
unsigned int var_9 = 3976298844U;
unsigned char var_10 = (unsigned char)137;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)8;
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
