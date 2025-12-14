#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)243;
unsigned long long int var_3 = 12764813230425339738ULL;
unsigned short var_8 = (unsigned short)41580;
signed char var_11 = (signed char)-9;
_Bool var_12 = (_Bool)1;
signed char var_15 = (signed char)-112;
int zero = 0;
unsigned short var_18 = (unsigned short)17870;
unsigned short var_19 = (unsigned short)36300;
int var_20 = 80859564;
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
