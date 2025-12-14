#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19896;
long long int var_3 = 4708970333762002891LL;
int var_10 = -994016051;
int zero = 0;
unsigned short var_17 = (unsigned short)14033;
unsigned int var_18 = 3409721104U;
unsigned long long int var_19 = 15990201626338322954ULL;
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
