#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)35;
unsigned long long int var_8 = 13004978171239686612ULL;
long long int var_10 = 4550638830361329838LL;
unsigned int var_11 = 1386485608U;
unsigned short var_16 = (unsigned short)43681;
int zero = 0;
long long int var_18 = -8791141522092759526LL;
unsigned char var_19 = (unsigned char)193;
int var_20 = -1711158308;
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
