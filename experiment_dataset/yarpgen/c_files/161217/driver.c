#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13483;
long long int var_2 = 1914885946438129077LL;
short var_6 = (short)6923;
long long int var_11 = -4544392322638152099LL;
long long int var_16 = -3440641265636931149LL;
int zero = 0;
long long int var_17 = -3788867090225241783LL;
long long int var_18 = 4215565365466511738LL;
long long int var_19 = -369332068409476907LL;
long long int var_20 = 8210827876930825759LL;
short var_21 = (short)-5874;
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
