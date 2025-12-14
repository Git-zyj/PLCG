#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 914709541863827399ULL;
unsigned short var_15 = (unsigned short)15759;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 1970447538;
unsigned short var_22 = (unsigned short)37629;
unsigned short var_23 = (unsigned short)43692;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
