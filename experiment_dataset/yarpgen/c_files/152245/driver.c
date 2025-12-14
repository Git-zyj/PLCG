#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
unsigned short var_1 = (unsigned short)65364;
unsigned int var_5 = 293854963U;
unsigned int var_7 = 1445751730U;
unsigned int var_8 = 3567119906U;
unsigned short var_9 = (unsigned short)64767;
unsigned int var_10 = 1401725419U;
signed char var_11 = (signed char)-28;
int zero = 0;
unsigned int var_12 = 3404529239U;
unsigned int var_13 = 1040072423U;
unsigned int var_14 = 3741152070U;
unsigned int var_15 = 492751337U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
