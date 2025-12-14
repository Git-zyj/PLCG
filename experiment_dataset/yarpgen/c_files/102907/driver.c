#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1363614541;
int var_5 = 95414713;
signed char var_8 = (signed char)-86;
unsigned int var_11 = 2587998545U;
int var_12 = 948371810;
long long int var_13 = -1550857270542793424LL;
unsigned int var_15 = 510307338U;
int zero = 0;
long long int var_16 = -96129604599336342LL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 313980113U;
long long int var_19 = 3314465622687922743LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
