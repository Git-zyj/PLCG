#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1522890930U;
short var_9 = (short)-2531;
signed char var_10 = (signed char)-65;
unsigned short var_12 = (unsigned short)35234;
long long int var_13 = -2061416639688771115LL;
unsigned int var_14 = 3965389405U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 3274229538U;
unsigned long long int var_19 = 2407818773343662142ULL;
unsigned char var_20 = (unsigned char)20;
void init() {
}

void checksum() {
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
