#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-67;
_Bool var_3 = (_Bool)1;
long long int var_7 = 3729083363738836369LL;
long long int var_8 = 6365297191221616035LL;
_Bool var_9 = (_Bool)0;
unsigned int var_14 = 3700952434U;
signed char var_17 = (signed char)-40;
unsigned long long int var_18 = 762925134684745822ULL;
unsigned char var_19 = (unsigned char)231;
int zero = 0;
signed char var_20 = (signed char)-39;
unsigned long long int var_21 = 16710218811120720907ULL;
short var_22 = (short)-3357;
long long int var_23 = -851772404851110898LL;
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
