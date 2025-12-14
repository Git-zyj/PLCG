#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13759588546532973845ULL;
_Bool var_6 = (_Bool)1;
long long int var_12 = -8140370440046944359LL;
signed char var_13 = (signed char)95;
int zero = 0;
signed char var_17 = (signed char)-96;
long long int var_18 = 5689653029093029817LL;
unsigned int var_19 = 4142581751U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
