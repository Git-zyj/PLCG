#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18231158650815197034ULL;
unsigned long long int var_4 = 15759990925848485633ULL;
unsigned long long int var_11 = 394244318644080211ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-17113;
int zero = 0;
short var_20 = (short)9832;
unsigned long long int var_21 = 10861430042137250812ULL;
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
