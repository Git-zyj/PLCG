#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)73;
long long int var_6 = 3597054559499210195LL;
unsigned char var_7 = (unsigned char)195;
unsigned char var_8 = (unsigned char)78;
signed char var_9 = (signed char)-91;
int zero = 0;
signed char var_11 = (signed char)51;
long long int var_12 = 2407948198600283921LL;
signed char var_13 = (signed char)28;
signed char var_14 = (signed char)113;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
