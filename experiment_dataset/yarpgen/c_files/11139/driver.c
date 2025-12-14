#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1953276914310510269ULL;
short var_3 = (short)6364;
unsigned long long int var_5 = 9438143411692217536ULL;
int var_6 = -1478850369;
int var_8 = 1829464710;
unsigned long long int var_17 = 10578157431180035742ULL;
int zero = 0;
long long int var_18 = -7853399185620049251LL;
short var_19 = (short)-7541;
long long int var_20 = 5292016023776647170LL;
short var_21 = (short)-20297;
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
