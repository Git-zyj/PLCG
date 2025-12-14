#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)33336;
short var_10 = (short)27656;
signed char var_11 = (signed char)-66;
signed char var_12 = (signed char)-108;
int zero = 0;
signed char var_18 = (signed char)-24;
unsigned short var_19 = (unsigned short)43351;
unsigned long long int var_20 = 7237861497050006736ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
