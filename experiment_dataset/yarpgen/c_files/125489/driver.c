#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2469638483U;
long long int var_1 = -5324175733415015918LL;
unsigned int var_2 = 2681866987U;
unsigned long long int var_5 = 17193288343260446196ULL;
int var_7 = -1553545777;
int var_9 = -510829499;
short var_10 = (short)-2770;
int var_11 = 169998817;
int var_15 = 275676647;
long long int var_18 = 2562811413039255418LL;
int zero = 0;
signed char var_20 = (signed char)-46;
_Bool var_21 = (_Bool)1;
long long int var_22 = -4615347284378628601LL;
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
