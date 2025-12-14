#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-31;
short var_14 = (short)-9999;
unsigned int var_18 = 3085284496U;
int zero = 0;
unsigned long long int var_19 = 3992541993368357896ULL;
long long int var_20 = 2435405237028480004LL;
long long int var_21 = 3854819835050098125LL;
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
