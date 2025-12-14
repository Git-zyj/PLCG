#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)13199;
unsigned short var_5 = (unsigned short)11700;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 753984765U;
short var_12 = (short)-12384;
long long int var_13 = -5028707293647639109LL;
int zero = 0;
long long int var_19 = 4458395423061142608LL;
long long int var_20 = -6998039042746638184LL;
short var_21 = (short)20212;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
