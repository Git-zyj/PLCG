#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-96;
unsigned int var_6 = 2002227060U;
short var_7 = (short)23224;
unsigned short var_16 = (unsigned short)54851;
unsigned int var_17 = 2840953115U;
int zero = 0;
int var_18 = 671914206;
unsigned int var_19 = 3528369863U;
short var_20 = (short)-26392;
int var_21 = 1842306491;
long long int var_22 = 5016364816018646449LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
