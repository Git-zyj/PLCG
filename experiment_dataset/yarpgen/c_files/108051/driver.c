#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1729432028;
int var_5 = 1829352159;
signed char var_8 = (signed char)68;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 2341676342U;
int var_14 = -960930449;
unsigned char var_15 = (unsigned char)35;
short var_17 = (short)32284;
int zero = 0;
int var_19 = -477460531;
int var_20 = 1321061444;
long long int var_21 = 687069858955392537LL;
long long int var_22 = 4333933098791013400LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
