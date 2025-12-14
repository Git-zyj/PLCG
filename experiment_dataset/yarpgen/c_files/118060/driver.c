#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 143390850;
unsigned long long int var_2 = 1034683580092133919ULL;
int var_4 = -227825215;
int var_5 = 536850254;
unsigned char var_8 = (unsigned char)186;
signed char var_14 = (signed char)-91;
int zero = 0;
long long int var_15 = -2463558950063879765LL;
unsigned long long int var_16 = 5788928124613714607ULL;
int var_17 = -1201414585;
int var_18 = -1919417316;
signed char var_19 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
