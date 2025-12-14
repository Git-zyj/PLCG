#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)216;
long long int var_11 = -7163912323639607763LL;
unsigned int var_16 = 245110249U;
int zero = 0;
long long int var_17 = -5788620659935141486LL;
unsigned int var_18 = 39641330U;
long long int var_19 = -2930085555602818035LL;
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
