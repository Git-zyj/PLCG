#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)31096;
signed char var_10 = (signed char)-71;
unsigned int var_16 = 953622944U;
unsigned long long int var_17 = 1484903962455725807ULL;
unsigned long long int var_18 = 11137280925149017799ULL;
int zero = 0;
unsigned long long int var_19 = 17040388921229560946ULL;
unsigned short var_20 = (unsigned short)45984;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
