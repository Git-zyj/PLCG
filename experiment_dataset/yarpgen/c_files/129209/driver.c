#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)106;
long long int var_3 = -3336661679665023916LL;
long long int var_4 = -1839118493014509283LL;
signed char var_6 = (signed char)42;
unsigned int var_11 = 3991099806U;
unsigned int var_12 = 1120416084U;
int zero = 0;
long long int var_15 = 1114300268131210224LL;
unsigned int var_16 = 51490057U;
long long int var_17 = 7182377745757884302LL;
signed char var_18 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
