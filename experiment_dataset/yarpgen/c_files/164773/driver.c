#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1898600234U;
short var_2 = (short)-13523;
unsigned long long int var_3 = 10933846438699340918ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)43199;
unsigned long long int var_13 = 2600968401743880896ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)23245;
short var_17 = (short)-95;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
