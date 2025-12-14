#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2521178909U;
signed char var_1 = (signed char)23;
long long int var_2 = -8309886883447612517LL;
short var_3 = (short)18406;
unsigned short var_4 = (unsigned short)16793;
unsigned int var_7 = 3206497096U;
unsigned int var_8 = 2752095551U;
unsigned short var_10 = (unsigned short)853;
int zero = 0;
signed char var_12 = (signed char)27;
unsigned int var_13 = 2996039041U;
long long int var_14 = 3450336579534556198LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
