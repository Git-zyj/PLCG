#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4681650426868395820LL;
long long int var_3 = -3015318292182056668LL;
unsigned int var_6 = 91816194U;
signed char var_7 = (signed char)-91;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 6646603812525389502LL;
signed char var_13 = (signed char)-65;
unsigned long long int var_14 = 15294692889386523032ULL;
unsigned int var_15 = 1459714053U;
int zero = 0;
unsigned int var_17 = 2905547912U;
signed char var_18 = (signed char)12;
unsigned int var_19 = 3556905590U;
void init() {
}

void checksum() {
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
