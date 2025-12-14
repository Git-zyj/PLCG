#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2175910727U;
int var_8 = -1382111830;
unsigned int var_9 = 2005597804U;
int zero = 0;
long long int var_11 = 6249293280744229945LL;
unsigned short var_12 = (unsigned short)57805;
signed char var_13 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
