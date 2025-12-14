#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3611842857433789911ULL;
unsigned char var_4 = (unsigned char)190;
short var_11 = (short)18060;
unsigned int var_12 = 2409877066U;
unsigned char var_15 = (unsigned char)170;
int zero = 0;
signed char var_17 = (signed char)103;
short var_18 = (short)14013;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 13311111468934349180ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
