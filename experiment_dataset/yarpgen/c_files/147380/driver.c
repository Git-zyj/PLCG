#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 684985210;
unsigned int var_2 = 2052999833U;
unsigned char var_4 = (unsigned char)237;
int var_6 = 434023756;
int zero = 0;
unsigned int var_13 = 3350812637U;
unsigned long long int var_14 = 2618945395985653451ULL;
int var_15 = -52426255;
unsigned char var_16 = (unsigned char)0;
short var_17 = (short)3791;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
