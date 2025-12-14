#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)-93;
unsigned long long int var_6 = 8804294916251336103ULL;
unsigned char var_7 = (unsigned char)185;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 14256289911402072334ULL;
unsigned int var_13 = 2473744448U;
int zero = 0;
int var_14 = -69263603;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 11531133915877807598ULL;
unsigned long long int var_17 = 10013910288604382269ULL;
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
