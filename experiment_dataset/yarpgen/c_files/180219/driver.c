#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 13559387976648590344ULL;
long long int var_9 = 1891851860824907769LL;
int zero = 0;
unsigned short var_18 = (unsigned short)27852;
unsigned long long int var_19 = 18117518904323125551ULL;
void init() {
}

void checksum() {
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
