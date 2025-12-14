#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1386982182;
unsigned long long int var_2 = 11686955141431124831ULL;
long long int var_3 = -5840944315403002279LL;
unsigned long long int var_6 = 14416206138099550805ULL;
long long int var_7 = -8264405482248151820LL;
int var_10 = -2122613387;
int zero = 0;
long long int var_14 = -1519169962899343432LL;
int var_15 = -333810669;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1468026546U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
