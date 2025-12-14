#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9844;
signed char var_7 = (signed char)15;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
long long int var_17 = -6539955274779216014LL;
unsigned long long int var_19 = 14431632837334109386ULL;
int zero = 0;
long long int var_20 = -5960862563020532237LL;
long long int var_21 = 3506708892221043804LL;
signed char var_22 = (signed char)-32;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
