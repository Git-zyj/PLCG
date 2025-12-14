#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18693;
signed char var_1 = (signed char)-118;
long long int var_2 = 6594570470461791934LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 15600766121520462264ULL;
unsigned int var_6 = 1520003840U;
long long int var_7 = 4914044319092842202LL;
short var_10 = (short)-16101;
unsigned int var_12 = 527575428U;
int zero = 0;
signed char var_14 = (signed char)21;
unsigned int var_15 = 2789170193U;
unsigned short var_16 = (unsigned short)32982;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
