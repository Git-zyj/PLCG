#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3632597831U;
signed char var_1 = (signed char)-34;
signed char var_4 = (signed char)-21;
int var_5 = -1250141505;
int var_7 = 2090641481;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 11692752690653992951ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
