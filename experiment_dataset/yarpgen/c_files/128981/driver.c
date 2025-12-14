#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_9 = (short)-31369;
unsigned long long int var_13 = 18205944877641050810ULL;
int var_15 = 594423319;
int zero = 0;
unsigned long long int var_17 = 16452386835697783185ULL;
unsigned char var_18 = (unsigned char)97;
unsigned char var_19 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
