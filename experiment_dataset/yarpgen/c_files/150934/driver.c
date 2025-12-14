#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
unsigned char var_3 = (unsigned char)55;
_Bool var_4 = (_Bool)1;
long long int var_5 = 6893877496281419556LL;
unsigned short var_6 = (unsigned short)22580;
unsigned short var_8 = (unsigned short)39902;
long long int var_10 = 6239562786649331657LL;
long long int var_12 = -3726176641409273102LL;
int zero = 0;
signed char var_14 = (signed char)-103;
int var_15 = -1624275772;
unsigned short var_16 = (unsigned short)26843;
void init() {
}

void checksum() {
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
