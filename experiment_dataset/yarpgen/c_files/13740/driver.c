#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11496524632865518978ULL;
short var_10 = (short)-8841;
unsigned char var_12 = (unsigned char)21;
long long int var_17 = 2892345041227157990LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 6109144266346430429LL;
short var_20 = (short)-8563;
unsigned int var_21 = 2496166683U;
void init() {
}

void checksum() {
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
