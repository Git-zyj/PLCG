#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)5;
signed char var_5 = (signed char)-41;
signed char var_8 = (signed char)-69;
signed char var_9 = (signed char)40;
int var_16 = 1336266376;
int zero = 0;
int var_18 = 2112984824;
int var_19 = 545638584;
int var_20 = -363938203;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
