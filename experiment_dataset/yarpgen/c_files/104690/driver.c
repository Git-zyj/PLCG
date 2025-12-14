#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16860;
short var_8 = (short)23392;
unsigned short var_10 = (unsigned short)27763;
unsigned long long int var_12 = 10858564161529388373ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)9703;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2920783924U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
