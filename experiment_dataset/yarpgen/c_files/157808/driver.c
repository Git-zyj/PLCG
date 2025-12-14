#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 765945522U;
unsigned char var_5 = (unsigned char)211;
unsigned int var_8 = 2175629057U;
signed char var_15 = (signed char)-125;
int zero = 0;
unsigned char var_17 = (unsigned char)2;
unsigned int var_18 = 2445765282U;
int var_19 = -1633096447;
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
