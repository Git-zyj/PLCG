#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 15822849534954415822ULL;
int var_4 = -673131865;
short var_5 = (short)-4717;
unsigned long long int var_8 = 11142925231791683474ULL;
int var_9 = 1515964375;
unsigned long long int var_10 = 13197511460108327100ULL;
unsigned long long int var_12 = 14953796704671731588ULL;
_Bool var_13 = (_Bool)1;
int var_14 = 1462513626;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 6037135110175080793ULL;
int var_18 = 1348087314;
int var_19 = -1232881516;
int var_20 = 22780356;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
