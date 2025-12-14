#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-47;
signed char var_2 = (signed char)-60;
unsigned int var_13 = 2239000723U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 11673190314442568741ULL;
unsigned int var_16 = 980143612U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
