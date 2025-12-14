#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4236538886U;
unsigned long long int var_2 = 6866035661016102931ULL;
signed char var_3 = (signed char)-1;
int var_4 = -1581393049;
long long int var_7 = 5956226610955495399LL;
long long int var_8 = 5962754405488488636LL;
unsigned char var_10 = (unsigned char)169;
int var_11 = 1546264534;
long long int var_12 = -2405543764873989574LL;
int var_15 = 24443839;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-29;
unsigned char var_19 = (unsigned char)186;
int zero = 0;
long long int var_20 = -5753980641559143360LL;
long long int var_21 = -8521248179694066872LL;
int var_22 = -1534463143;
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
