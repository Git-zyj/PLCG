#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15709123422446723636ULL;
unsigned int var_3 = 1324566646U;
long long int var_4 = -4132640475288832870LL;
unsigned int var_5 = 296783107U;
signed char var_6 = (signed char)80;
short var_10 = (short)18306;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)29960;
long long int var_13 = 357164422632157165LL;
signed char var_14 = (signed char)-17;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
