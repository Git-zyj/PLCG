#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 824534005;
signed char var_5 = (signed char)-44;
unsigned int var_13 = 544664160U;
int var_15 = 1312636447;
int zero = 0;
unsigned long long int var_17 = 7547424936834029999ULL;
unsigned int var_18 = 3799973527U;
_Bool var_19 = (_Bool)0;
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
