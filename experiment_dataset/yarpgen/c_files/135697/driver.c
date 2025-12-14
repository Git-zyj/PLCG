#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)45651;
unsigned short var_5 = (unsigned short)56670;
signed char var_6 = (signed char)-59;
unsigned char var_10 = (unsigned char)43;
unsigned int var_19 = 3938088109U;
int zero = 0;
unsigned int var_20 = 4403496U;
unsigned long long int var_21 = 3087258776396365615ULL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
