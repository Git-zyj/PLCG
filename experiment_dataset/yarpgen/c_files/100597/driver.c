#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24608;
unsigned char var_8 = (unsigned char)172;
signed char var_11 = (signed char)-73;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3030376884U;
long long int var_19 = 3851974891154239598LL;
unsigned int var_20 = 2614147451U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
