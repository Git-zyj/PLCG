#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
int var_1 = 2017753097;
unsigned long long int var_2 = 11480394015689508818ULL;
long long int var_4 = 464616359850690300LL;
unsigned long long int var_5 = 14159985376236445685ULL;
signed char var_6 = (signed char)93;
int var_7 = -1739397445;
long long int var_10 = 4681593365987588427LL;
unsigned int var_13 = 1727128994U;
short var_15 = (short)-5163;
int var_18 = -299603736;
int zero = 0;
long long int var_20 = -6895841571442722819LL;
int var_21 = 1977313295;
long long int var_22 = 9107155166122794709LL;
short var_23 = (short)-29422;
signed char var_24 = (signed char)83;
unsigned int var_25 = 3323151840U;
unsigned int var_26 = 1075134727U;
int var_27 = 2081638390;
unsigned short var_28 = (unsigned short)14521;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
