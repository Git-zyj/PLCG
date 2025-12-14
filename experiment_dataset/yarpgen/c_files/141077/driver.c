#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)45;
long long int var_2 = 9076651087567759351LL;
long long int var_4 = 8552401745373241392LL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)53;
unsigned char var_12 = (unsigned char)84;
signed char var_13 = (signed char)35;
short var_15 = (short)-26206;
int zero = 0;
signed char var_19 = (signed char)12;
signed char var_20 = (signed char)46;
signed char var_21 = (signed char)-8;
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
