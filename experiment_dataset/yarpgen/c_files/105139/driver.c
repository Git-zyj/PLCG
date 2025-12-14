#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11930737134497857218ULL;
long long int var_2 = -3350655666641798907LL;
long long int var_3 = 9114566512941144679LL;
unsigned int var_4 = 157265027U;
unsigned long long int var_10 = 16667325593394925909ULL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)88;
unsigned int var_14 = 2893981989U;
int zero = 0;
unsigned int var_15 = 1083090413U;
unsigned short var_16 = (unsigned short)8959;
short var_17 = (short)20224;
signed char var_18 = (signed char)11;
unsigned char var_19 = (unsigned char)214;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
