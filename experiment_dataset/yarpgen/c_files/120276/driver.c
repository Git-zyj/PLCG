#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6786682688274498629LL;
_Bool var_3 = (_Bool)0;
long long int var_5 = -4223988121876584043LL;
unsigned int var_11 = 3066620867U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 1322192735U;
int var_18 = -508605377;
unsigned short var_19 = (unsigned short)43970;
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
