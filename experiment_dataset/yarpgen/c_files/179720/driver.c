#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1329367016;
unsigned long long int var_5 = 10299607908153622884ULL;
_Bool var_13 = (_Bool)0;
int var_14 = -1021679417;
int zero = 0;
unsigned short var_19 = (unsigned short)32411;
int var_20 = -698125835;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
