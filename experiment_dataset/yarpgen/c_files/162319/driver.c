#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3584546354U;
signed char var_5 = (signed char)-67;
signed char var_6 = (signed char)-98;
signed char var_11 = (signed char)-52;
unsigned long long int var_13 = 16269708983370632622ULL;
int zero = 0;
long long int var_14 = 1477902908221899143LL;
unsigned long long int var_15 = 4092741290497753405ULL;
void init() {
}

void checksum() {
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
