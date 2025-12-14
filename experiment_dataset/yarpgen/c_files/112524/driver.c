#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)-29567;
long long int var_3 = -4071776557408552681LL;
signed char var_4 = (signed char)118;
unsigned int var_6 = 2491251888U;
signed char var_7 = (signed char)-87;
signed char var_8 = (signed char)-49;
int zero = 0;
short var_10 = (short)-11735;
unsigned char var_11 = (unsigned char)254;
signed char var_12 = (signed char)112;
unsigned int var_13 = 3477799950U;
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
