#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5549307322473307470ULL;
_Bool var_2 = (_Bool)0;
signed char var_10 = (signed char)-60;
int zero = 0;
long long int var_11 = -1866307495758053797LL;
long long int var_12 = -6989194802518277576LL;
signed char var_13 = (signed char)-5;
int var_14 = -349366920;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
