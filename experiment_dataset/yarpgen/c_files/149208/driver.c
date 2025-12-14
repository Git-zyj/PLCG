#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-31;
unsigned int var_2 = 2571473377U;
signed char var_10 = (signed char)-66;
short var_11 = (short)3251;
signed char var_14 = (signed char)-32;
int zero = 0;
unsigned int var_17 = 2126551707U;
unsigned int var_18 = 3286160946U;
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
