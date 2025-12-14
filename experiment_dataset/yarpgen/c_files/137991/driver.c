#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 584778380;
unsigned long long int var_3 = 16393233987831591773ULL;
long long int var_4 = 6392537280977619078LL;
long long int var_8 = -2332707294160286263LL;
short var_13 = (short)28772;
int zero = 0;
signed char var_19 = (signed char)-120;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)78;
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
