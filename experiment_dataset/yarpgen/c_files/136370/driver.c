#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19236;
int var_1 = 361902977;
signed char var_7 = (signed char)-88;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)19;
int zero = 0;
unsigned short var_14 = (unsigned short)37405;
unsigned long long int var_15 = 682666433437546114ULL;
unsigned short var_16 = (unsigned short)42863;
unsigned short var_17 = (unsigned short)9413;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
