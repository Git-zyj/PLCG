#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-112;
unsigned long long int var_13 = 15075137922244647310ULL;
unsigned int var_15 = 1558569437U;
unsigned long long int var_17 = 4231411967005595387ULL;
int zero = 0;
unsigned int var_19 = 3950460385U;
unsigned int var_20 = 39110398U;
unsigned short var_21 = (unsigned short)18912;
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
