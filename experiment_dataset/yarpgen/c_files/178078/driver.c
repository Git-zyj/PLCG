#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 349368362;
short var_6 = (short)-3878;
unsigned long long int var_8 = 2763124258477679665ULL;
long long int var_10 = 7742409353804213659LL;
long long int var_11 = -1764155249076899730LL;
long long int var_12 = -7957949736208905043LL;
signed char var_13 = (signed char)-68;
_Bool var_15 = (_Bool)0;
signed char var_19 = (signed char)-70;
int zero = 0;
unsigned char var_20 = (unsigned char)38;
signed char var_21 = (signed char)-94;
signed char var_22 = (signed char)49;
unsigned long long int var_23 = 13946440582535488856ULL;
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
