#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)149;
long long int var_2 = 6023313763883660697LL;
long long int var_3 = -4404416285306839620LL;
unsigned short var_4 = (unsigned short)43613;
long long int var_5 = -4752949845209573929LL;
int zero = 0;
unsigned int var_13 = 123291499U;
int var_14 = -828795567;
unsigned int var_15 = 2988100882U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
