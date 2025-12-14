#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -505678178;
int var_5 = -32178437;
signed char var_7 = (signed char)-118;
int var_9 = 568794850;
unsigned int var_12 = 3409355482U;
int var_16 = 1893979149;
int zero = 0;
unsigned short var_17 = (unsigned short)9491;
int var_18 = 394018366;
unsigned int var_19 = 1028586684U;
void init() {
}

void checksum() {
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
