#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4173801583U;
short var_2 = (short)28313;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)20510;
unsigned int var_6 = 1758854237U;
int var_7 = -1280640354;
long long int var_8 = -211183990301602261LL;
int zero = 0;
short var_11 = (short)-8728;
unsigned int var_12 = 3174831569U;
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
