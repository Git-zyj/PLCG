#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8671800955025013939ULL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 1981840207905316932LL;
signed char var_8 = (signed char)61;
signed char var_13 = (signed char)120;
_Bool var_18 = (_Bool)0;
short var_19 = (short)22091;
int zero = 0;
short var_20 = (short)-8485;
signed char var_21 = (signed char)-96;
signed char var_22 = (signed char)108;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
