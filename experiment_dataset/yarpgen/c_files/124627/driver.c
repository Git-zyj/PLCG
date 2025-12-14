#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)33;
long long int var_2 = -5953611416400034521LL;
unsigned int var_3 = 1362941719U;
signed char var_4 = (signed char)-88;
signed char var_5 = (signed char)26;
signed char var_15 = (signed char)-28;
long long int var_17 = 7722217038080243139LL;
int zero = 0;
signed char var_18 = (signed char)-73;
long long int var_19 = -311578679180877990LL;
int var_20 = 1057184532;
signed char var_21 = (signed char)-100;
void init() {
}

void checksum() {
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
