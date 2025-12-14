#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9799103584420922543ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 15534813817784155121ULL;
long long int var_11 = 1595077910423471847LL;
int zero = 0;
long long int var_12 = -960391223111045675LL;
short var_13 = (short)-29032;
signed char var_14 = (signed char)84;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
