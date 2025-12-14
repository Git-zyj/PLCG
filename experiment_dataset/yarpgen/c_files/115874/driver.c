#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)47617;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)18357;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-21;
unsigned long long int var_20 = 13661062143877633179ULL;
signed char var_21 = (signed char)-60;
int var_22 = 579378707;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
