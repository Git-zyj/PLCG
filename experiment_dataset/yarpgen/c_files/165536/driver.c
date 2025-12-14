#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)62;
unsigned int var_8 = 3274159007U;
unsigned long long int var_9 = 14899853729689599853ULL;
unsigned short var_10 = (unsigned short)56989;
int var_13 = 1331387916;
int var_14 = -1810062790;
int zero = 0;
short var_20 = (short)12629;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-112;
int var_23 = -1784079474;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
