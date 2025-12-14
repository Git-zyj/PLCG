#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 498208392;
unsigned short var_1 = (unsigned short)30038;
long long int var_3 = 6607213123284900758LL;
unsigned short var_4 = (unsigned short)22464;
long long int var_7 = 1739697800110845752LL;
short var_8 = (short)-10108;
int var_10 = 569313236;
int zero = 0;
short var_12 = (short)-9511;
long long int var_13 = -6671791682989843153LL;
signed char var_14 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
