#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
unsigned long long int var_1 = 1921314282839912617ULL;
signed char var_2 = (signed char)23;
unsigned long long int var_4 = 12250759797084980358ULL;
signed char var_5 = (signed char)-20;
unsigned long long int var_8 = 2426963941184503661ULL;
unsigned long long int var_12 = 12799729084334409606ULL;
int zero = 0;
signed char var_14 = (signed char)-61;
unsigned long long int var_15 = 4844241749197263392ULL;
unsigned long long int var_16 = 9204931427360300382ULL;
signed char var_17 = (signed char)-14;
unsigned long long int var_18 = 6589135071473708804ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
