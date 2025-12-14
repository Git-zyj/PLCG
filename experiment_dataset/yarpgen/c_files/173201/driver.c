#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8204825712850657304LL;
short var_3 = (short)3393;
short var_4 = (short)-14970;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3604675753U;
unsigned int var_7 = 1311829289U;
long long int var_9 = 8122969993474165340LL;
unsigned int var_10 = 1176473402U;
int zero = 0;
long long int var_11 = 1140920249321772581LL;
short var_12 = (short)22045;
_Bool var_13 = (_Bool)0;
short var_14 = (short)16864;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
