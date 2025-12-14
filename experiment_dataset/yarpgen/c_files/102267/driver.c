#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2207529687U;
unsigned long long int var_6 = 3422149064692405805ULL;
signed char var_9 = (signed char)117;
int var_11 = 1555936889;
int zero = 0;
long long int var_14 = -3115410825561770076LL;
unsigned int var_15 = 3316561422U;
unsigned int var_16 = 3082339873U;
unsigned long long int var_17 = 12962400544071821708ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
