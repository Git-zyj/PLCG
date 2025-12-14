#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1838857396;
short var_11 = (short)7661;
unsigned short var_12 = (unsigned short)17517;
unsigned long long int var_17 = 1194567771952217248ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-63;
void init() {
}

void checksum() {
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
