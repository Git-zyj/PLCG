#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-17280;
unsigned short var_7 = (unsigned short)44480;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)43019;
unsigned long long int var_11 = 689898266745484326ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 120997636;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
