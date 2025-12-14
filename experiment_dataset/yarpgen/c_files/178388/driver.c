#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15414;
unsigned char var_2 = (unsigned char)45;
unsigned char var_3 = (unsigned char)157;
short var_4 = (short)25767;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)86;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 1763613915113613471ULL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
