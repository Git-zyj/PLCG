#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_9 = (unsigned short)15063;
short var_11 = (short)12941;
int var_12 = -406947770;
unsigned long long int var_14 = 14349013473767350213ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 11143418262310480464ULL;
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
