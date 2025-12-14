#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -728512539;
long long int var_2 = 3223824607475292297LL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1740600754U;
short var_5 = (short)-14353;
long long int var_8 = -3597582826468998880LL;
unsigned char var_16 = (unsigned char)153;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
long long int var_21 = 5665534705236780747LL;
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
