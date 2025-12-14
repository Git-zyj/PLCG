#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12665;
long long int var_1 = -6532285001075945324LL;
short var_5 = (short)11060;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)21956;
unsigned char var_14 = (unsigned char)163;
short var_15 = (short)-575;
int var_16 = 729185200;
int var_17 = 1105992292;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
