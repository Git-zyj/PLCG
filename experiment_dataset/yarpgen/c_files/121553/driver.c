#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)31739;
short var_7 = (short)-31388;
unsigned int var_9 = 1267566362U;
_Bool var_10 = (_Bool)1;
unsigned short var_17 = (unsigned short)38204;
int zero = 0;
short var_19 = (short)9816;
unsigned long long int var_20 = 15342023322262222401ULL;
void init() {
}

void checksum() {
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
