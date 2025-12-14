#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14833569101850970897ULL;
signed char var_3 = (signed char)-106;
short var_5 = (short)-30000;
unsigned char var_6 = (unsigned char)75;
int zero = 0;
signed char var_12 = (signed char)-25;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 10772705635443928267ULL;
unsigned short var_15 = (unsigned short)26208;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
