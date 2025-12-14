#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32361;
signed char var_2 = (signed char)-58;
unsigned short var_3 = (unsigned short)37807;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 9316034694066481928ULL;
unsigned int var_11 = 3026987260U;
long long int var_15 = -8513373640263551775LL;
int zero = 0;
unsigned int var_18 = 3545243985U;
unsigned int var_19 = 10269909U;
unsigned long long int var_20 = 11749680953597508923ULL;
unsigned int var_21 = 2494725962U;
void init() {
}

void checksum() {
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
