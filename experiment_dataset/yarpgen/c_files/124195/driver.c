#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)33969;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-73;
long long int var_11 = 1936076181868041083LL;
int zero = 0;
unsigned int var_13 = 1278405638U;
long long int var_14 = 5977288692110233013LL;
signed char var_15 = (signed char)85;
void init() {
}

void checksum() {
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
