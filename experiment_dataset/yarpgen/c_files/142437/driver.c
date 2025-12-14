#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3828683857811239384LL;
short var_1 = (short)-25091;
unsigned long long int var_7 = 5796929302824659552ULL;
unsigned long long int var_8 = 5109125809990002462ULL;
long long int var_9 = 9046108371945764178LL;
long long int var_10 = -6746184663739383726LL;
long long int var_14 = -1927835291926195954LL;
int zero = 0;
unsigned long long int var_16 = 44683887159434753ULL;
unsigned long long int var_17 = 2664332144998289687ULL;
unsigned long long int var_18 = 8362750719609406860ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
