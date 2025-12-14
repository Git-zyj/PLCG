#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 16523182445218371153ULL;
unsigned short var_10 = (unsigned short)38690;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 17160569361317182862ULL;
unsigned long long int var_15 = 11308103780790999547ULL;
unsigned short var_16 = (unsigned short)60400;
signed char var_17 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
