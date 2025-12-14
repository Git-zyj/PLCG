#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-61;
signed char var_2 = (signed char)116;
short var_5 = (short)-6366;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 4082818621U;
unsigned long long int var_8 = 485292636410942562ULL;
short var_9 = (short)29547;
int zero = 0;
short var_10 = (short)-22412;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-73;
signed char var_13 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
