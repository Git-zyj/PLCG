#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1397924801U;
int var_8 = 1333130160;
unsigned long long int var_14 = 319099505180624278ULL;
signed char var_15 = (signed char)44;
int zero = 0;
long long int var_16 = 3529097615072079591LL;
unsigned long long int var_17 = 2283776251844837810ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 9567098944344877624ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
