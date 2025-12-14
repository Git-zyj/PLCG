#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -819506964;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 10117488835783125177ULL;
unsigned short var_10 = (unsigned short)56487;
short var_13 = (short)4736;
unsigned long long int var_15 = 7241990687986898347ULL;
int zero = 0;
long long int var_16 = -5248339878038361192LL;
unsigned char var_17 = (unsigned char)12;
unsigned long long int var_18 = 4847804670691176157ULL;
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
