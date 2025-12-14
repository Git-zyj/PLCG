#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3633794982690277726LL;
signed char var_7 = (signed char)-8;
long long int var_13 = 1825790248474780165LL;
unsigned char var_14 = (unsigned char)41;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 4710832644975129149ULL;
long long int var_20 = 3961602397117574762LL;
void init() {
}

void checksum() {
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
