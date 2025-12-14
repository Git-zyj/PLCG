#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -314043538;
unsigned short var_2 = (unsigned short)44687;
int var_4 = -1410927191;
signed char var_5 = (signed char)-42;
unsigned short var_6 = (unsigned short)50033;
long long int var_8 = -2473002745801219531LL;
unsigned long long int var_10 = 17609188418047793002ULL;
int zero = 0;
long long int var_13 = -685286283932731790LL;
long long int var_14 = 6034054046584456146LL;
unsigned long long int var_15 = 1516970331462722065ULL;
unsigned short var_16 = (unsigned short)33036;
void init() {
}

void checksum() {
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
