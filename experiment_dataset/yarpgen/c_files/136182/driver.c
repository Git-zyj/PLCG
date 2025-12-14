#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4053373953U;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_17 = (short)13356;
unsigned int var_18 = 190475650U;
signed char var_19 = (signed char)69;
unsigned long long int var_20 = 14770241892180778147ULL;
long long int var_21 = 724422558245560901LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
