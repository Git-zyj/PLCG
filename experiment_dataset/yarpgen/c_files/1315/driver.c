#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1718295797;
unsigned char var_4 = (unsigned char)58;
unsigned long long int var_6 = 8026166506198534205ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)61;
int var_9 = 2128396712;
short var_12 = (short)20914;
int zero = 0;
short var_14 = (short)1522;
unsigned short var_15 = (unsigned short)15510;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
