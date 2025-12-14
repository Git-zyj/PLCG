#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 953122103627546306LL;
unsigned int var_2 = 3433032576U;
unsigned int var_3 = 2930497912U;
signed char var_4 = (signed char)18;
unsigned char var_7 = (unsigned char)235;
int var_8 = 954613595;
int zero = 0;
int var_10 = 874870407;
unsigned char var_11 = (unsigned char)6;
long long int var_12 = -6155348475570704595LL;
unsigned char var_13 = (unsigned char)139;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
