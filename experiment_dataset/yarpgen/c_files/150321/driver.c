#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
int var_2 = -1800434519;
long long int var_3 = -4548476301587054400LL;
signed char var_6 = (signed char)20;
signed char var_8 = (signed char)38;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int var_12 = -1072531169;
signed char var_13 = (signed char)-83;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
