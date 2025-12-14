#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1232822020748356179ULL;
short var_11 = (short)32439;
short var_15 = (short)-6627;
_Bool var_17 = (_Bool)1;
int var_19 = 171702617;
int zero = 0;
long long int var_20 = -8880561031310076779LL;
unsigned int var_21 = 2232525576U;
short var_22 = (short)30607;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
