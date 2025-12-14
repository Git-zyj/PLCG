#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1023118260;
int var_11 = -690964578;
unsigned short var_16 = (unsigned short)7554;
int zero = 0;
int var_20 = -1127754113;
int var_21 = -1157534710;
int var_22 = -1922876941;
signed char var_23 = (signed char)-40;
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
