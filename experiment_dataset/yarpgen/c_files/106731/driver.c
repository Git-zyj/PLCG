#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8157;
signed char var_2 = (signed char)64;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)9;
unsigned long long int var_10 = 6903266954785468190ULL;
int zero = 0;
short var_12 = (short)27499;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
