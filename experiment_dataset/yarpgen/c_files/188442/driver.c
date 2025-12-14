#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-50;
short var_2 = (short)-30690;
unsigned long long int var_5 = 1938799822747536736ULL;
signed char var_6 = (signed char)102;
unsigned long long int var_8 = 7213585339666892494ULL;
int zero = 0;
signed char var_11 = (signed char)-118;
unsigned long long int var_12 = 9816340078830064504ULL;
int var_13 = -709894336;
unsigned int var_14 = 404733527U;
int var_15 = -1245940484;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
