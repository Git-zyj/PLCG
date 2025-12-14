#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62804;
unsigned int var_1 = 3669340604U;
unsigned long long int var_2 = 7407880492018615216ULL;
long long int var_6 = 5811789778430547602LL;
short var_7 = (short)374;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = -1189015951;
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
