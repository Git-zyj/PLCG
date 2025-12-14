#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)49404;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)-109;
short var_12 = (short)12345;
long long int var_14 = -8874314486631591027LL;
short var_17 = (short)-17973;
unsigned int var_18 = 1134281425U;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)4;
void init() {
}

void checksum() {
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
