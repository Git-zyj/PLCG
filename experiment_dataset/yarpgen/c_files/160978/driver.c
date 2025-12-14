#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5448337435302631331ULL;
unsigned short var_1 = (unsigned short)54373;
signed char var_3 = (signed char)-88;
long long int var_4 = 6995121226121851436LL;
unsigned short var_6 = (unsigned short)35159;
long long int var_9 = 190880457933926317LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = 5093305623506323127LL;
signed char var_12 = (signed char)-99;
signed char var_13 = (signed char)-79;
void init() {
}

void checksum() {
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
