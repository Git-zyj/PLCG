#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3002700314U;
short var_10 = (short)-20916;
_Bool var_12 = (_Bool)0;
int var_13 = 661679790;
int var_14 = 1733559309;
int var_15 = -835759294;
int zero = 0;
unsigned int var_19 = 689940375U;
int var_20 = -423754358;
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
