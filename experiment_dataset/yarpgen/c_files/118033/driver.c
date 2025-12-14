#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22174;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 477214768U;
unsigned long long int var_3 = 11298457322378154995ULL;
_Bool var_4 = (_Bool)1;
long long int var_5 = -1311914033451334701LL;
long long int var_6 = 1455674675871434137LL;
unsigned long long int var_7 = 9110828011255208711ULL;
signed char var_8 = (signed char)62;
unsigned short var_9 = (unsigned short)3815;
int zero = 0;
long long int var_10 = -6666560874217727590LL;
unsigned int var_11 = 981295620U;
short var_12 = (short)-29967;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 4968395373131160447ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
