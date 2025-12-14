#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
unsigned char var_1 = (unsigned char)248;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 2553845627810742423ULL;
unsigned long long int var_5 = 8529890548005324640ULL;
unsigned char var_7 = (unsigned char)118;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 763543878U;
unsigned int var_11 = 372215506U;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -1216825538;
int var_16 = -1755571029;
void init() {
}

void checksum() {
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
