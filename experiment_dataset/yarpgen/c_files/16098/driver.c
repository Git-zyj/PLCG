#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)9843;
unsigned char var_8 = (unsigned char)47;
unsigned long long int var_14 = 1110671747088084940ULL;
short var_17 = (short)-11694;
int zero = 0;
short var_19 = (short)-28318;
unsigned char var_20 = (unsigned char)232;
long long int var_21 = -8105052893940289040LL;
int var_22 = 794933154;
signed char var_23 = (signed char)-13;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
