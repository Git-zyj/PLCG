#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3587893127U;
short var_2 = (short)18773;
unsigned int var_5 = 644010630U;
short var_12 = (short)-10214;
long long int var_13 = 6820146802599341137LL;
int var_15 = 66167281;
int zero = 0;
short var_19 = (short)-29558;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
