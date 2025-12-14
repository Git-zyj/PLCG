#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
unsigned int var_1 = 338730310U;
signed char var_3 = (signed char)72;
unsigned int var_4 = 4062693355U;
unsigned int var_10 = 786503447U;
int zero = 0;
long long int var_15 = 6554098957614428259LL;
long long int var_16 = -8983566757561581967LL;
long long int var_17 = 4722787068651654572LL;
signed char var_18 = (signed char)-83;
long long int var_19 = -7794166344998512941LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
