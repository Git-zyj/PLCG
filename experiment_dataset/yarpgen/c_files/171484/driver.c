#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-60;
signed char var_8 = (signed char)-113;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)40;
signed char var_13 = (signed char)116;
int zero = 0;
unsigned long long int var_17 = 354397159159761366ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
