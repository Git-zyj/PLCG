#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 912791216;
int var_1 = -1544949871;
_Bool var_2 = (_Bool)1;
long long int var_7 = 3581082287273321837LL;
unsigned int var_11 = 2485115880U;
int var_12 = 1874089854;
int var_16 = -1621458152;
int var_17 = 1187575020;
int zero = 0;
short var_19 = (short)-12825;
long long int var_20 = 307120550596208273LL;
unsigned int var_21 = 1936900502U;
int var_22 = 332021960;
unsigned short var_23 = (unsigned short)47839;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
