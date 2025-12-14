#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29014;
unsigned long long int var_1 = 7428195261409370616ULL;
unsigned long long int var_7 = 9850766870961030061ULL;
unsigned char var_9 = (unsigned char)15;
unsigned short var_11 = (unsigned short)47613;
int var_14 = 1423027328;
int var_16 = 391539443;
int zero = 0;
long long int var_17 = -4334756463230124126LL;
unsigned long long int var_18 = 16202347722113297355ULL;
signed char var_19 = (signed char)94;
unsigned int var_20 = 2637737228U;
unsigned char var_21 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
