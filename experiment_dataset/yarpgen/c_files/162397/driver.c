#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3158629152U;
unsigned int var_4 = 1569258164U;
signed char var_7 = (signed char)62;
unsigned short var_8 = (unsigned short)65118;
long long int var_13 = -4243789127437890493LL;
signed char var_15 = (signed char)68;
int zero = 0;
unsigned int var_18 = 2415323172U;
signed char var_19 = (signed char)-116;
void init() {
}

void checksum() {
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
