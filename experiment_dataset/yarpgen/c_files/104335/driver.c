#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4157184522936638966LL;
unsigned long long int var_1 = 9414735444382418865ULL;
signed char var_2 = (signed char)-1;
unsigned int var_5 = 1865815952U;
_Bool var_7 = (_Bool)0;
int var_8 = -1928322042;
unsigned long long int var_9 = 9304792803056738983ULL;
int var_10 = 860318567;
long long int var_11 = -8367260035310572216LL;
int zero = 0;
unsigned long long int var_13 = 4895544806193336439ULL;
int var_14 = -1621329809;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 631509875U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
