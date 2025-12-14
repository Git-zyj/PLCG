#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_7 = (short)56;
unsigned int var_8 = 2362579891U;
int zero = 0;
unsigned long long int var_10 = 12924043073382062111ULL;
signed char var_11 = (signed char)-117;
unsigned long long int var_12 = 13346820836933764008ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
