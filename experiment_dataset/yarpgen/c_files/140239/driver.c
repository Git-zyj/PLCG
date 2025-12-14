#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 226942138;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 7574738825750312844ULL;
int zero = 0;
unsigned int var_18 = 2985294560U;
unsigned short var_19 = (unsigned short)65341;
signed char var_20 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
