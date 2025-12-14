#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)90;
_Bool var_11 = (_Bool)0;
long long int var_13 = 3923693389075216572LL;
int zero = 0;
int var_20 = 1344760371;
unsigned int var_21 = 628917496U;
signed char var_22 = (signed char)-113;
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
