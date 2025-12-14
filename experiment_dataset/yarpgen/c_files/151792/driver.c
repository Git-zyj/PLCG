#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -248884549897598273LL;
unsigned long long int var_1 = 9242052210608385462ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 2608402710600809508ULL;
signed char var_8 = (signed char)78;
short var_9 = (short)-3351;
signed char var_10 = (signed char)-36;
int zero = 0;
unsigned int var_20 = 733827030U;
int var_21 = 381291923;
void init() {
}

void checksum() {
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
